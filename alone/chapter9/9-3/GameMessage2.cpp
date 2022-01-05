#include "stdio.h"

void Congratulation(int count) {
    static char *Message[] = {
            "",
            "축하합니다. 최고 성적입니다.",
            "대단한 성적입니다.",
            "참 잘하셨습니다.",
            "보통이 아니군요",
            "보통입니다.",
            "조금 더 노력하셔야겠습니다. ",
            "정말 못하시군요",
    };
    if (count >=7){
        count = 7;
    }
    printf(Message[count]);

}

int main(void)
{
    Congratulation(4);
}
