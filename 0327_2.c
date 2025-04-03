int main(void)
{
//변수 선언
int kor, eng, mat, sum=0, rank;
float avg;
//데이터입출력
printf("국어, 영어 수학 점수를 입력하세요. :.\n");
scanf("%d %d %d", &kor, &eng, &mat);
// 계산식 작성
sum = kor + eng + mat;
avg = sum/3.0;
rank = (avg >= 80 ? 1 : (avg >= 60 ? 2 : 3));
printf("총점 : %d, 평균 : %.2f, 등급 : %d\n", sum, avg, rank);
return 0;
}