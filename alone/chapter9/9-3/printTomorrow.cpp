#include "stdio.h"

void printTomorrow(int month, int day) {
    static int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int endOfMonth = days[month];
    if (month > 12 || month < 1 || day > 31 || day < 1) {
        printf("잘못된 날짜 형식입니다.\n");
        return;
    } else if (day > endOfMonth) {
        printf("잘못된 날짜 형식입니다.\n");
        return;
    }
    day++;
    if (day > endOfMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
        }
    }
    printf("내일은 %d월 %d일 입니다.\n", month, day);

}

int main(void) {
    int month, day;
    while (1) {
        printf("오늘 날짜(월 일)을 공백으로 구분하여 입력해주세요.");
        scanf("%d %d", &month, &day);
        if (!month && !day) {
            printf("프로그램이 종료 되었습니다.\n");
            break;
        }
        printTomorrow(month, day);
    }
}