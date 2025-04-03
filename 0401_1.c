#include <stdio.h>

int main(void)
{
//변수 선언
int qty, cost, result;
printf("판매수량을 입력하세요. : \n");
scanf("%d", &qty);
printf("단가를 입력하세요. : \n");
scanf("%d", &cost);
// 조건문 사용(판매수량 x 단가)
if(qty*cost > 1000000)
    result = (qty*cost)*(0.95);
else
    result = qty*cost;
printf("판매금액 : %d \n", result);
return 0;
}