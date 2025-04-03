// int 자료형에서 오버플로가 발생하는 경우
#include <stdio.h>

int main()
{
	// 증감 연산자 사용하여 연산하기 2
	int a =5, b=5;
	int re1 = 0, re2=0;

	printf("초기상태 a : %d, b : %d\n",a,b);
	printf("초기상태 re1 : %d, re2 : %d\n",re1,re2);

	++a;
	re1 = a;
	re2 = b++;


	printf("연산 후 a : %d, b : %d\n",a,b);
	printf("연산 후 re1 : %d, re2 : %d\n",re1,re2);

	return 0;

}