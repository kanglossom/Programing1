#include <stdio.h>

int main(void)
{
    // 변수 선ㅓ
    int hour, min = 60, sec = 60;

    // 데이터 입출력
    printf("시간을 입력하세요 : \n");
    scanf("%d", &hour);

    printf("%d시간은 %d분, %d초\n", hour, min*hour, sec*min*hour);
    return 0;
}