#include <stdio.h>

int main(void)
{
    // 변수 선언
    int n1, n2, n3, min;

    printf("세 수를 입력하세요: \n");
    scanf("%d %d %d",&n1, &n2, &n3);
    printf("입력된 값 n1: %d, n2: %d, n3: %d\n", n1, n2, n3);

    // 조건연산자(3항 연산자) 연산처리
    min = (n1 < n2) ? n1 : n2;
    min = (min < n3) ? min : n3;

    printf("세 수 중 가장 작은 값 : %d\n", min);
    return 0;

}