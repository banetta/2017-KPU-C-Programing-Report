#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

// �Ʒ��� �ִ� �Լ� ������ �ҷ����� ���� ��� �ۼ� (main �Լ��� �� ���� �ö�� �� �ְ� �ۼ����ش�)
void max(int a, int b);
void min(int a, int b);

int main() {
	/*
	// math �Լ� �ҷ��ͼ� ����غ���
	double value;
	double PI = 3.1415921828;
	for (double value = 1;  value <= 100;  value++)
	{
		// �Լ��� �ѹ� ����� ���ô�.
		// sin(), cos(), tan()
		printf("sin : %lf, cos : %lf, tan : %lf\n", sin(value*PI), cos(value*PI), tan(value*PI));
	}

	return 0;
	*/

	// ū �� ���� �� �� �Լ� �����
	// �� �� ���� ���� a, b ����
	int a, b;

	while (true) {
		// 1. �� ���� �Է� �ޱ� -> a, b �� ����
		printf("�� ���� �Է��ϼ��� : ");
		scanf("%d%d", &a, &b);

		// 2.1 ���� �Լ��� ���
		max(a, b);
		min(a, b);

		// 2. ���(4Ģ����) max, min (main������ �ذ�)
		//    ū ���� ���� ���� ã�Ƽ� ����ϱ�.
		/*
		if (a>b)
		{
			printf("ū ���� %d �Դϴ�.\n", a);
			printf("���� ���� %d �Դϴ�.\n", b);
		}
		else if (a<b)
		{
			printf("ū ���� %d �Դϴ�.\n", b);
			printf("���� ���� %d �Դϴ�.\n", a);
		}
		else
		{
			printf("�����ϴ�.\n");
			break;
		}
		*/
			
	}
}
// 2.1 ���� �Լ��� �ۼ��ϱ�
// �Լ� ���� : �̸�(�Է�){����}
// max()
// �Է� : a, b �� ���� �׸��� �־��ش�
// ex) void max(int a, int b)
void max(int a,int b) {
	if (a>b)
	{
		printf("ū ���� %d �Դϴ�.\n", a);
	}
	else if (a<b)
	{
		printf("ū ���� %d �Դϴ�.\n", b);
	}
	else
	{
		printf("error\n");
	}
}

void min(int a,int b) {
	if (a>b)
	{
		printf("���� ���� %d �Դϴ�.\n", b);
	}
	else if (a<b)
	{
		printf("���� ���� %d �Դϴ�.\n", a);
	}
	else
	{
		printf("error\n");
	}
}