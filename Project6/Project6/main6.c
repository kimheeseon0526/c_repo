#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {

	//int score = 70;
	//char grade;

	////����
	////90�̻� A, 80�̻� B, �������� F

	//if (score >= 90) {	// 90�̻�
	//	grade = 'A';
	//}
	//// 90�̻��� �ƴ� ���
	//else if (score >= 80) {	//90�̸� ~ 80�̻�
	//		grade = 'B';
	//	}
	//	else {	//90�̸� ~ 80�̻� �ƴ� ���
	//		grade = 'F';
	//	
	//}
	//
	//printf("���� : %d, ���� : %c\n", score, grade);

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
		printf("������ sum : %d, ������ i : %d\n", sum, i);
		i++;
	}
	printf("1���� %d������ �հ�� %d\n", n, sum);
	*/

	//������ �ݺ����� ������� 1 ~ 100������ ¦���� ���� ���Ͻÿ�.

	int i = 1, n, sum = 0;

	n = 100;

	while (i <= 100) {
		if (i % 2 == 0) {
			sum += i;	
		}
		printf("%d\n", i);
		i++;
	}
		printf("1 ~ 100������ ¦���� �� : %d\n", sum);

	i = 'A';	 //65
	while (i <= 'Z') {
		printf("%c", i);
		i++;
	}






	return 0;
}