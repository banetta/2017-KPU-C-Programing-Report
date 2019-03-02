#include <stdio.h>

int b;
// ����Լ� (Recursive var.)
int fact(int n);
void func(void);
int main() {
	//func();

	int result, n;
	while (true) {
		printf("factorial : ");
		scanf_s("%d", &n);
	
		result = fact(n);
		printf(" %d ! = %d\n", n, result);
	}
	return 0;
}

void func(void) {

	b++;
	int a = 0; // ��������, ���ÿ� ����
	a++;
	printf("�Լ� func()�� ȣ��Ǿ����ϴ�. a = %d, b = %d\n", a, b);
	// func(); // ���� ���� �ٽ� ȣ��.. ����Լ�
	// �������� ����Լ��� ���� ��ӵ� ���� �������� ���� �����÷ο찡 �߻��Ѵ�.
	// warning C4717: 'func': ��� ���� ��ο��� ������Դϴ�. �Լ��� ���� ��Ÿ�� ���� �����÷ΰ� �߻��մϴ�.

	// ���� �����÷ο츦 �����ϱ� ���� ��� �Լ��� ȣ�� Ƚ�� ���� (����� ��������)
	if (b < 10)
	{
		func();
	}
	
	// ��� �Լ��� ���Ǵ� ��
	// factorial �Լ�
	// 5! = 5 * 4 * 3 * 2 * 1 = 5 * 4!
	// fact(5) = 5 * fact(4)
}

int fact(int n)
{
	int result;
	if (n == 0)
	{
		return 0;
	}
	if (n == 1) // ������ ���� ���
	{
		return 1;
	}
	result = n * fact(n - 1);
	return result;
}