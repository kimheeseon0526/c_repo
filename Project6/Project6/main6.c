#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {

	//int score = 70;
	//char grade;

	////조건
	////90이상 A, 80이상 B, 나머지는 F

	//if (score >= 90) {	// 90이상
	//	grade = 'A';
	//}
	//// 90이상이 아닐 경우
	//else if (score >= 80) {	//90미만 ~ 80이상
	//		grade = 'B';
	//	}
	//	else {	//90미만 ~ 80이상도 아닌 경우
	//		grade = 'F';
	//	
	//}
	//
	//printf("점수 : %d, 학점 : %c\n", score, grade);

	//
	//int a = 10, b = 30, c = 20;
	//int max = a;

	//if (max < b) {
	//	max = b;
	//}
	//if (max < c) {
	//	max = c;
	//}
	//printf("%d\n", max);


	//p.205

	/*int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}
	*/

	/*int i = 1, n, sum = 0;

	n = 5;
	while (i <= n) {
		sum += i;
		printf("현재의 sum : %d, 현재의 i : %d\n", sum, i);
		i++;
	}
	printf("1부터 %d까지의 합계는 %d\n", n, sum);
	*/

	//현재의 반복문을 기반으로 1 ~ 100까지의 짝수의 합을 구하시오.

	int i = 1, n, sum = 0;

	n = 100;

	while (i <= 100) {
		if (i % 2 == 0) {
			sum += i;	
		}
		printf("%d\n", i);
		i++;
	}
		printf("1 ~ 100까지의 짝수의 합 : %d\n", sum);

	i = 'A';	 //65
	while (i <= 'Z') {
		printf("%c", i);
		i++;
	}






	return 0;
}