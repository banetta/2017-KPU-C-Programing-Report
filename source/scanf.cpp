#pragma warning	(disable:4996) //Visual Studio 2017 ȯ�濡�� scanf ���� �ذ��� ���� �߰�
#include <stdio.h>
int main(void)
{
	
	// �⺻���� scanf ��� ��
	int age, height;

	printf("What is your age & height?: ");
	scanf("%d%d", &age, &height);
	printf("Wow! Really? Are you %d years old?\n Wow! Really? Are you %d height?", age, height);
	
	int a, b, c;

	printf("10���� ���� 1�� �Է� : ");
	scanf("%d", &a);
	printf("10���� : %d, 16���� : %x, 8���� : %o\n", a, a, a);
		
	printf("16���� ���� 1�� �Է� : ");
	scanf("%x", &b);
	printf("10���� : %d, 16���� : %x, 8���� : %o\n", b, b, b);
		
	printf("8���� ���� 1�� �Է� : ");
	scanf("%o", &c); 
	printf("10���� : %d, 16���� : %x, 8���� : %o\n", c, c, c);
		
	float f1, f2;
	double d1, d2;

	printf("float�� �Ǽ� �� �� �Է� : ");
	scanf("%f %e", &f1, &f2);
	printf("float�� �Ǽ� ��� : f1=%f, f2=%e\n", f1, f2);

	printf("double�� �Ǽ� �� �� �Է� : ");
	scanf("%lf %le", &d1, &d2);
	printf("double�� �Ǽ� ��� : d1=%lf, d2=%le\n", d1, d2);


	return 0;
}
