#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
//=====================================================================================================
	//글자를 하나 입력받아 그 값이 영문자인지 여부 확인하기
	//var, scanf

	//char ch;
	//printf("글자를 하나 입력하세요 >");
	//scanf("%c", &ch);


	//printf("%c", ch);

	//a = 97 ~ , A = 65 ~ 90
	/*printf("%c\n", ch);
	printf("%d\n", ch);
	printf("%d\n", 'A');*/

	//printf("%d", ch >= 'A'&& ch <= 'Z' || ch >= 'a' && ch <= 'z'); //참이면 1, 거짓이면 0 출력됨
	
//======================================================================================================

	/*printf("%c\n", 5 > 10 ? 'A' : 'B'); //거짓이라 'B' 출력됨

	int x = 10;
	x += 5; // x = x + 5
	printf("x : %d", x);
	*/

	int a, b, c;
	printf("숫자 세개를 입력하세요 > \n");
	scanf("%d %d %d" , & a, &b, &c);
	float avg = (a + b + c) / 3.f;
	printf("%f", avg);



	return 0;
}