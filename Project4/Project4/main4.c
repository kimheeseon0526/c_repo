#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

	/*srand(time(NULL));
	int dice = rand() % 6 + 1;
	printf("주사위 값 : %d", dice);

	double value = rand() / RAND_MAX;
	printf("%17.15f", value);
	*/


	//====================================================================================
	

	//Q1. 숫자의 부호를 판단("양수", "음수", "0")

	/*
	int num = -5;
	printf("%s\n", num > 0 ? "양수" : num < 0? "음수" : "0");
	printf("%s", num > 0 ? "양수" : (num < 0 ? "음수" : "0"));
	*/	


	//Q2. 정수의 값을 기준으로 3의 배수이면서 5의 배수인지 판단  - ok

	/*
	int t = 17;
	printf("%s\n", t % 3 == 0 && t % 5 == 0 ? "참" : "거짓");
	*/

	//Q3. 정수 세개를 기준으로 최대값 하나만 출력하라

	/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int max = num1 > num2 ? num1 : num2;
	max = max > num2 ? max : num3;
	*/

	//Q4. 두 개의 정수의 차이를 항상 양수로 표현하라 - ok

	/*
	int c = 20, d = 10;
	int mi = c - d;  // 두 정수의 차이
	
	printf("%d\n", mi > 0 ? mi : -mi);
	*/


	//Q5. 두 변수의 값을 교환

	//ver1 - 변수 3개 사용

	/*
	* 
	int a = 9, b = 17, y = 0;

	y = a;
	a = b;
	b = y;
	
	printf("%d %d\n", a, b);
	*/


	return 0;
}



