#pragma	warning (disable:4996)
#include <stdio.h>
#define PI 3.1415921828 // ���ͷ� ��� �Է�

int main()
{
	// ���� ����, �޸� ���� ����
	
	float r = 20;	// ������
	float h = 7;	// ����
	float myeonjeok, wontong;
	
	// ���� ����

	myeonjeok = r * r * PI;

	// ������ ����

	wontong = myeonjeok * h;
	
	
	printf("���\n - ���� : %.2f\n - ���� : %.2f\n", myeonjeok, wontong);

	return 0;
}