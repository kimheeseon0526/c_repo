#include <stdio.h>
#pragma warning(disable :4996)

int main(void) 
{
	//���� ���

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

	//scanf("%d", &x);    //& �̻��� �ּҰ��� ã�� ���� ��°� �ҷ����� ���Ѵ�??
	//printf("%d\n", x);


	//int a, b;

	/*printf("���ڸ� �ΰ� �Է��ϼ���\n");
	scanf("%d %d", &a, &b);
	printf("��� : %d\n", a + b);*/


	/*int kor = 50, eng = 80, mat = 93;
	int sum = kor + eng + mat;
	float avg = sum / 3;*/


	/*Q.����, ����, ���� ������ �Է¹ް� ������ ����� ����Ͽ� ����϶�
	int kor, eng , mat, sum ;
	float avg;

	printf("����, ����, ���� ������ �Է��Ͻÿ�\n");
	scanf("%d %d %d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = sum / 3;
	printf("���� : %d, ��� : %.2f\n", sum, avg);
	*/


	//��� ������

	/*int a = 10, b = 3;

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a % b = %d\n", a % b);
	*/

/*--------------------------------------------------------------------------------------------------------------------------*/
	//Q1.���ڸ� ���� �Է� �޾Ƽ� ������ �ڸ����� �ش��ϴ� ������ �հ�

	int num, sum;

	printf("Q1.���ڸ� ���ڸ� �Է��Ͻÿ� > \n");
	scanf("%d", &num);
	int a, b, c;

	a = num / 100;  
	b = num % 100 /10 ;  
	c = num % 10;   

	sum = a + b + c;

	printf(" 100�� �ڸ� : %d, 10�� �ڸ� : %d , 1�� �ڸ� : %d, �հ� : %d\n", a, b, c, sum);




	//Q2. �ʸ� �Է� �޾� ��, ��, �ʸ� ���� ��¼��~

	
	//ver1.
	int x;

	printf("Q2.�ʸ� �Է��Ͻÿ� : \n");
	scanf("%d", &x);

	int h, m, s ;

	h = x / 3600;
	m = (x % 3600) / 60;
	s = (x % 3600) % 60;

	printf(" �� : %d , �� : %d , �� : %d \n", h, m, s);
	
	

	//ver2.
	int y;

	printf("Q2.�ʸ� �Է��Ͻÿ� : \n");
	scanf("%d", &y);

	int d, na;

	d = y / 3600;
	na = y % 3600;

	printf(" �� : %d , �� : %d , �� : %d \n", d, na/60, na%60);


}