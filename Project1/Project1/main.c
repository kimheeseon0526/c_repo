#include <stdio.h>

int main(void)
{
	//printf("int : %d\n", 1);  //���� 1
	//printf("char : %d\n", 'A'); //���� 1 65
	//printf("char : %d\n", '\n'); // 10

	

	/* 
	ASCII
	0 = 48, a = 97, A = 65
	*/

	//printf("print integer : %d\n", 127);
	//printf("%d + %d  = %d", 5, 7, 5+7);

	//printf("%s + %s  = %s\n", "5", "7", "5 + 7");
	//printf("int %d, float %f, char %c, string %s", 1, 1.f, '1', "1"); //int 1, float 1.000000, char 1, string 1

	// �̸�. ��������, ��������, ��������, ����, ���

	//String �̸�;
	//int ��������, ��������, ��������, ����, ���;

	//���� = �� + �� + ��
	//��� = ����/3

	printf("�̸� : %s, �������� = %d, �������� = %d, �������� = %d\n","����" , 50, 80, 65);
	printf("���� = %d\n", 50 + 80 + 65);
	printf("��� = %.2f\n", (50 + 80 + 65) / 3.f);

	printf("%10s%s\n", "Hello", "World");//     HelloWorld  ������
	printf("%-10s%s\n", "Hello", "World");//Hello     World  �İ���
	printf("%10.2s%s\n", "Hello", "World");//        HeWorld   2���ڸ� ���

	printf("lead zero test : %d\n", 3);
	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 3);


	printf("sjnfnoat132156\r234\n");


	printf("���� �۾� ���� ������ �̸���?\n"); //���� �۾� ���� ������ �̸���?
	printf("\"���� �۾� ���� ������ �̸���?\" ");//"���� �۾� ���� ������ �̸���?"

	printf("C:\\Users\\TJ\\source\\repos\\Project1\\Project1\n");


	printf("int�� ũ��� : %d\n", sizeof(int)); //4
	printf("float�� ũ��� : %d\n", sizeof(float)); //4
	printf("char�� ũ��� : %d\n", sizeof(char));  //1


	//------------------------------------------------------------------------------------------
	//printf("Hello World!");
	//printf("Hello TJ");



	//printf("\n");
	//printf("%f, %f, %f, %f, %f", 1.0, -0.100,2., .51548561563, -.100f);
	/*
		�����
		1.000000, -0.100000, 2.000000, 0.515486, -0.100000

		�Ҽ��� 6°�ڸ����� ����

	*/

	return 0;

	/*
		�����

		ctrl + F5
		ctrl + / : �ּ� �����
		
		
	*/

	

}
