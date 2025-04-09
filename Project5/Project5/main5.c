#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {


	int x;
	scanf("%d", &x);

	/*
	if (x > 0)
	{
		printf("positive\n");
		printf("positive2\n");
		printf("positive3\n");
	}
	printf("always!");
	*/

	/*
	if (x % 3 == 0)
	{
		printf("%d = %d * %d\n", x, 3, x / 3);
	}
	if (x % 5 == 0)
	{
		printf("%d = %d * %d\n", x, 5, x / 5);
	}
	if (x % 7 == 0)
	{
		printf("%d = %d * %d\n", x, 7, x / 7);
	}
	*/

	/*if (x > 0)
	{
		printf("positive\n");

		if (x % 2 == 0)
		{
			printf("even\n");
		}
	}
	printf("음수");
	*/

	// p 171 조건 + 31일을 넘겼을 경우, 잘못된 입력이라고 출력하기


	
	int range = 0;
	if (x >= 1 && x <= 31) {  // 1보다 작거나 31일보다 클 경우  1 출력
		range = 1;
	}

	x %= 7;  // x = x % 7 순환
	if (range) {		
		if (x == 0 || x == 6) {
			printf("weekend\n");
			if (x == 0) {
				printf("일요일\n");
			}
			if (x == 6) {
				printf("토요일\n");
			}
		}
		//if (!(x == 0 || x == 6)) {
		else{
			printf("weekday\n");
		}
	}
	if (!range) {
		printf("잘못된 입력입니다\n");
	}
	
		

	return 0;
}