#include <stdio.h>
#pragma warning (disable:4996)
/*
int main() {

	int a, b;
	double d;
	a = 50;
	d = a; // �����Ϸ��� ���� �ڵ�����ȯ
	d = d / (double)23; // ���α׷����� ���� ��������ȯ

	printf("d = %lf \n", d);
	
	b = d; // d = 2.17

	printf("b = %d \n", b);

	return 0;
}
*/
typedef int money; // �ڷ��� ������
int main() {

	money a, b;
	double d;

	a = 5;
	b = 2;
	d = (double)5 / 2;
	
	printf("d = %lf \n", d);

	return 0;

}
