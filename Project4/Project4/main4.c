#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

	/*srand(time(NULL));
	int dice = rand() % 6 + 1;
	printf("�ֻ��� �� : %d", dice);

	double value = rand() / RAND_MAX;
	printf("%17.15f", value);
	*/


	//====================================================================================
	

	//Q1. ������ ��ȣ�� �Ǵ�("���", "����", "0")

	/*
	int num = -5;
	printf("%s\n", num > 0 ? "���" : num < 0? "����" : "0");
	printf("%s", num > 0 ? "���" : (num < 0 ? "����" : "0"));
	*/	


	//Q2. ������ ���� �������� 3�� ����̸鼭 5�� ������� �Ǵ�  - ok

	/*
	int t = 17;
	printf("%s\n", t % 3 == 0 && t % 5 == 0 ? "��" : "����");
	*/

	//Q3. ���� ������ �������� �ִ밪 �ϳ��� ����϶�

	/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int max = num1 > num2 ? num1 : num2;
	max = max > num2 ? max : num3;
	*/

	//Q4. �� ���� ������ ���̸� �׻� ����� ǥ���϶� - ok

	/*
	int c = 20, d = 10;
	int mi = c - d;  // �� ������ ����
	
	printf("%d\n", mi > 0 ? mi : -mi);
	*/


	//Q5. �� ������ ���� ��ȯ

	//ver1 - ���� 3�� ���

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



