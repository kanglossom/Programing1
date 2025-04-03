#include <stdio.h>

// 매크로 상수 선언
#define Dollors 1100
#define Euro 1350
#define Pound 1500

int main()
{
    int money;
    

    // 데이터 입력
    printf("환전할 원화 금액? ");
    scanf("%d", &money);

    // 데이터 출력
    printf("\n달러 환전 : %d\n", (money / Dollors));
    printf("\n유로 환전 : %d\n", (money  / Euro));
    printf("\n파운드 환전 : %d\n", (money / Pound));
    

    return 0;
}

//gcc 0320_2.c -o 0320_2