#include <stdio.h>
#pragma warning (disable:4996)
/*
int main()
{
	char a, b, result; // char 8��Ʈ ����

	a = 0xa; // ������ 10
	b = 0x7; 
	
	result = a&b; // ��Ʈ���� AND
	
	printf("result = %x \n", result);
	
	result = a | b; // ��Ʈ���� OR

	printf("result = %x \n", result);

	result = a^b;
	
	printf("result = %x \n", result);

	return 0;

}
*/
/*
int main(){
	char a, result; // char 8��Ʈ ����
	/*
	a = 0x1; // ������ 1
	result = a << 1; // ����Ʈ << 1

	printf("result = %x(%d) \n", result, result);
	
	result = a << 2; // ����Ʈ << 2

	printf("result = %x(%d) \n", result, result);

	result = a << 3; // ����Ʈ << 3

	printf("result = %x(%d) \n", result, result);

	result = a << 4; // ����Ʈ << 4

	printf("result = %x(%d) \n", result, result);

	result = a << 5; // ����Ʈ << 5

	printf("result = %x(%d) \n", result, result);

	result = a << 6; // ����Ʈ << 6

	printf("result = %x(%d) \n", result, result);

	result = a << 7; // ����Ʈ << 7 �̶� �� �� ��Ʈ�� 1�̵Ǹ鼭 ������ �νĵǾ� 1�� ������ ���� �� +1�� �Ͽ� -128�� ������� ������.

	printf("result = %x(%d) \n", result, result);

	result = a << 8; // ����Ʈ << 8

	printf("result = %x(%d) \n", result, result);

	for (char i; i = 0; i < 8 i++)
	{
		result = a << i;
		printf("result = %x(%d) \n", result, result);
	}
	
	
	a = -0x10; // ������ 16
	result = a >> 1; // ����Ʈ 1 ������

	printf("result = %x(%d) \n", result, result);

	for (int i = 0; i < 9; i++)
	{
		result = a >> i;
		printf("result = %x(%d) \n", result, result);
	
	}
	

	return 0;

}
*/
/*
int main() {

	char num1 = 10; 
	short num2 = 20; 
	int num3 = 30; 
	long num4 = 40;

	printf("\n--------������ �ڷ����� ������ �޸� ũ��--------\n"); 
	printf("char���� ũ�� %d����Ʈ, %d����Ʈ \n", sizeof(char), sizeof(num1) ); 
    printf("short���� ũ�� %d����Ʈ, %d����Ʈ \n", sizeof(short), sizeof(num2) ); 
	printf("int���� ũ�� %d����Ʈ, %d����Ʈ \n", sizeof(int), sizeof(num3)); 
	printf("long���� ũ�� %d����Ʈ, %d����Ʈ \n", sizeof(long), sizeof(num4) );

	float num5 = 3.14;
	double num6 = 3.15;
	long double num7 = 3.17;

	printf("\n--------�Ǽ��� �ڷ����� ������ �޸� ũ��--------\n"); 
	printf("float���� ũ�� %d����Ʈ, %d����Ʈ \n", sizeof(float), sizeof(num5) );
	printf("double���� ũ�� %d����Ʈ, %d����Ʈ \n", sizeof(double), sizeof(num6)); 
	printf("long double���� ũ�� %d����Ʈ, %d����Ʈ \n", sizeof(long double), sizeof(num7));

	return 0;
}
*/
/*
#include <math.h>
int main() {

	char a;
	double result;
	result = sin( 3.141592 / 2.0 );

	printf("sin = %lf \n", result);

	return 0;
}
*/

int main() {

	char num1 = -129; // �ּڰ�(-128)���� -1��ŭ ���� �� ����(����÷ο�)
	char num2 = 128; // �ִ�(127)���� +1��ŭ ū �� ����(�����÷ο�)

	printf("%d \n", num1); // 127 ���
	printf("%d \n", num2); // -128 ���
	
	num1 = -130; // �ּڰ�(-128)���� -2��ŭ ���� �� ����(����÷ο�)
	num2 = 129; // �ִ�(127)���� +2��ŭ ū �� ����(�����÷ο�)

	printf("%d \n", num1); // 126 ���
	printf("%d \n", num2); // -127 ���

	return 0;
}