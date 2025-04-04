#include <stdio.h>

int main(void)
{
	//printf("int : %d\n", 1);  //정수 1
	//printf("char : %d\n", 'A'); //문자 1 65
	//printf("char : %d\n", '\n'); // 10

	

	/* 
	ASCII
	0 = 48, a = 97, A = 65
	*/

	//printf("print integer : %d\n", 127);
	//printf("%d + %d  = %d", 5, 7, 5+7);

	//printf("%s + %s  = %s\n", "5", "7", "5 + 7");
	//printf("int %d, float %f, char %c, string %s", 1, 1.f, '1', "1"); //int 1, float 1.000000, char 1, string 1

	// 이름. 국어점수, 영어점수, 수학점수, 총점, 평균

	//String 이름;
	//int 국어점수, 영어점수, 수학점수, 총점, 평균;

	//총점 = 국 + 영 + 수
	//평균 = 총점/3

	printf("이름 : %s, 국어점수 = %d, 수학점수 = %d, 영어점수 = %d\n","김희선" , 50, 80, 65);
	printf("총점 = %d\n", 50 + 80 + 65);
	printf("평균 = %.2f\n", (50 + 80 + 65) / 3.f);

	printf("%10s%s\n", "Hello", "World");//     HelloWorld  선공백
	printf("%-10s%s\n", "Hello", "World");//Hello     World  후공백
	printf("%10.2s%s\n", "Hello", "World");//        HeWorld   2글자만 출력

	printf("lead zero test : %d\n", 3);
	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 3);


	printf("sjnfnoat132156\r234\n");


	printf("현재 작업 중인 폴더의 이름은?\n"); //현재 작업 중인 폴더의 이름은?
	printf("\"현재 작업 중인 폴더의 이름은?\" ");//"현재 작업 중인 폴더의 이름은?"

	printf("C:\\Users\\TJ\\source\\repos\\Project1\\Project1\n");


	printf("int의 크기는 : %d\n", sizeof(int)); //4
	printf("float의 크기는 : %d\n", sizeof(float)); //4
	printf("char의 크기는 : %d\n", sizeof(char));  //1


	//------------------------------------------------------------------------------------------
	//printf("Hello World!");
	//printf("Hello TJ");



	//printf("\n");
	//printf("%f, %f, %f, %f, %f", 1.0, -0.100,2., .51548561563, -.100f);
	/*
		결과값
		1.000000, -0.100000, 2.000000, 0.515486, -0.100000

		소수점 6째자리까지 고정

	*/

	return 0;

	/*
		단축기

		ctrl + F5
		ctrl + / : 주석 단축기
		
		
	*/

	

}
