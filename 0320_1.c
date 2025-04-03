#include <stdio.h>
#define MAX 100

int main() {
    // 변수 선언
    int num1 =MAX;
    int num2 =MAX-1;
    int num3 =-MAX;

    // 데이터입력

    printf("num1 = %d\n", num1);
    printf("num1 = %d\n", num2);
    printf("num1 = %d\n", num3);
    printf("MAX = %f\n", (double)MAX); // 형변환 사용


    return 0;

}

// gcc 0320_1.c -o 0320_1
// ./0320_1