#include "stdio.h"

#define RANGE 100

int main(void)
{
    int prime[RANGE];
    for (int i = 1; i <= RANGE; ++i) {
        prime[i] = 1;
    }
    for (int i=2; i<=RANGE; i++){
        if (prime[i]){
            for (int j = i+i; j <=RANGE; j+=i) {
                prime[j] = 0;
            }
        }
    }
    puts("1~100까지의 소수 목록");
    for (int i=2; i<=RANGE; i++) {
        if (prime[i]){
            printf("%d ",i);
        }
    }
}