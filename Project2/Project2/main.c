#include <stdio.h>
#pragma warning(disable :4996)

int main(void) 
{
	//변수 사용

	/*int age = 20;
	float height = 173.5f, weight = 65.4f;
	char blood = 'A';

	printf("age : %d\n", age);
	printf("height : %.2f\n", height);
	printf("weight : %.2f\n", weight);
	printf("char : %c\n", blood);
	*/


	/*int a = 5, b = 7;
	int x = a + b;

	printf("a + b - 1 = %d\n", x - 1);
	printf("(a + b) * 2 = %d\n", x * 2);
	printf("(a + b) + 5 = %d\n", x + 5);

	a = b = 56;

	printf("%d,%d, %d\n", a, b, a); //56,56, 56

	*/

	//scanf("%d", &x);    //& 미사용시 주소값을 찾지 못해 출력값 불러오지 못한다??
	//printf("%d\n", x);


	//int a, b;

	/*printf("숫자를 두개 입력하세요\n");
	scanf("%d %d", &a, &b);
	printf("결과 : %d\n", a + b);*/


	/*int kor = 50, eng = 80, mat = 93;
	int sum = kor + eng + mat;
	float avg = sum / 3;*/


	/*Q.국어, 영어, 수학 점수를 입력받고 총점과 평균을 계산하여 출력하라
	int kor, eng , mat, sum ;
	float avg;

	printf("국어, 영어, 수학 점수를 입력하시오\n");
	scanf("%d %d %d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = sum / 3;
	printf("총점 : %d, 평균 : %.2f\n", sum, avg);
	*/


	//산술 연산자

	/*int a = 10, b = 3;

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a % b = %d\n", a % b);
	*/

/*--------------------------------------------------------------------------------------------------------------------------*/
	//Q1.세자리 숫자 입력 받아서 각각의 자릿수에 해당하는 숫자의 합계

	int num, sum;

	printf("Q1.세자리 숫자를 입력하시오 > \n");
	scanf("%d", &num);
	int a, b, c;

	a = num / 100;  
	b = num % 100 /10 ;  
	c = num % 10;   

	sum = a + b + c;

	printf(" 100의 자리 : %d, 10의 자리 : %d , 1의 자리 : %d, 합계 : %d\n", a, b, c, sum);




	//Q2. 초를 입력 받아 시, 분, 초를 각각 어쩌고~

	
	//ver1.
	int x;

	printf("Q2.초를 입력하시오 : \n");
	scanf("%d", &x);

	int h, m, s ;

	h = x / 3600;
	m = (x % 3600) / 60;
	s = (x % 3600) % 60;

	printf(" 시 : %d , 분 : %d , 초 : %d \n", h, m, s);
	
	

	//ver2.
	int y;

	printf("Q2.초를 입력하시오 : \n");
	scanf("%d", &y);

	int d, na;

	d = y / 3600;
	na = y % 3600;

	printf(" 시 : %d , 분 : %d , 초 : %d \n", d, na/60, na%60);


}