#include "stdio.h"
#include "stdlib.h"

typedef int KeyType;
typedef int ValueType;

typedef struct tagNode
{
    KeyType key;
    ValueType value;
} Node;


typedef struct tagHashTable
{
    int TableSize;
    Node * Table;
} HashTable;

HashTable * SHT_CreateHashTable(int TableSize);
void SHT_Set(HashTable * HT , KeyType Key , ValueType Value);
ValueType SHT_GET(HashTable * HT , KeyType Key);
void SHT_DestroyHashTable(HashTable * HT);
int SHT_Hash(KeyType Key , int TableSize);

HashTable * SHT_CreateHashTable(int TableSize){
    HashTable * HT = (HashTable*) malloc(sizeof(HashTable));
    HT->Table = (Node*) malloc(sizeof(Node) * TableSize);
    HT->TableSize = TableSize;

    return HT;
}

int SHT_Hash(KeyType Key , int TableSize){
    return Key % TableSize;
}

void SHT_Set(HashTable* HT , KeyType key , ValueType value) {
    int address = SHT_Hash(key , HT->TableSize);
    HT->Table[address].key = key;
    HT->Table[address].value = value;
}

ValueType SHT_GET(HashTable * HT , KeyType Key){
    int address = SHT_Hash(Key, HT->TableSize);
    return HT->Table[address].value;
}

void SHT_DestroyHashTable(HashTable *HT)
{
    free(HT->Table);
    free(HT);
}

int main()
{
    HashTable * HT = SHT_CreateHashTable(193);

    SHT_Set(HT, 418, 32114);
    SHT_Set(HT, 9, 514);
    SHT_Set(HT, 27,8917);
    SHT_Set(HT,1031,286);

    printf("Key : %d , value : %d \n",418, SHT_GET(HT,418));
    printf("Key : %d , value : %d \n",9, SHT_GET(HT,9));
    printf("Key : %d , value : %d \n",27, SHT_GET(HT,27));
    printf("Key : %d , value : %d \n",1031, SHT_GET(HT,1031));

    SHT_DestroyHashTable(HT);
    return 0;
}