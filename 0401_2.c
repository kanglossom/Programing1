#include <stdio.h>
int main(void)
{
//변수 선언
int width, height, choice;
printf("선택하세요. (1:정사각형), (2:직사각형) :.\n");
scanf("%d", &choice);
// 계산식 작성
if(choice==1)
{
    printf("한변의 길이는? ");
    scanf("%d", &width);
    printf("정사각형의 면적 : %d\n", width*width);
    printf("정사각형의 길이 : %d\n", width*4);

}
else
{
    printf("가로, 세로의 길이는? ");
    scanf("%d %d", &width, &height);
    printf("정사각형의 면적 : %d\n", width*height);
    printf("정사각형의 길이 : %d\n", width*2+height*2);

}
return 0;
}