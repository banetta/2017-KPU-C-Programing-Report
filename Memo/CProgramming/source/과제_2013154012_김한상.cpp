/*
����

1. ���� ���� ���ϱ�
- �������� �Է����� �޾Ƽ� ������ ���ؼ� ����Ͻÿ�.

2. �ﰢ���� ���� ���ϱ�
- �غ��� ���̸� �Է����� �޾Ƽ� ������ ���ؼ� ����Ͻÿ�.

*/
#pragma warning (disable:4996) // VS2017 ȯ�濡�� scanf �Լ� ���� ����
#include <stdio.h>
#define	PI 3.14159265359 // PI�� ���ͷ� ����� ����

float CRS(float r), TRS(float w, float h);

// 1. main �ȿ��� ���� �ذ�

/*
int main()
{
// 1. ���� ���� ���ϱ�

float r, circleresult; // ���� ������ ���ϱ� ���� �ʿ��� ���� ���� r : ������, circleresult : ���

// �ʿ��� �� �Է� �ޱ�
printf("1. ���� ���� ���ϱ�\n");
printf("������ ���� ���� �������� �Է��ϼ��� : ");
scanf("%f", &r);

circleresult = r * r * PI; // ������ ���

printf("�������� %2.f �� ���� �������� %.2f �Դϴ�.\n\n", r, circleresult); // ��� ���

// 2. �ﰢ���� ���� ���ϱ�

float w, h, triangleresult; // �ﰢ���� ������ ���ϱ� ���� �ʿ��� ���� ���� w : ����, h : ����, triangleresult : ���

// �ʿ��� �� �Է� �ޱ�
printf("2. �ﰢ�� ���� ���ϱ�\n");
printf("�ﰢ���� ���� ���̸� �Է��ϼ��� : ");
scanf("%f", &w);

printf("�ﰢ���� ���̸� �Է��ϼ��� : ");
scanf("%f", &h);

triangleresult = (w + h) / 2; // �ﰢ�� ���� ���

printf("���ΰ� %2.f �̰� ���̰� %2.f �� �ﰢ���� ������ %.2f �Դϴ�.\n\n", w, h, triangleresult); // ������

return 0;
}
*/

// 2. ������ �Լ��� ����� �̿��ؼ� �ذ�

int main()
{
	// 1. ���� ���� ���ϱ�

	float r, circleresult; // ���� ������ ���ϱ� ���� �ʿ��� ���� ���� r : ������, circleresult : ���

						   // �ʿ��� �� �Է� �ޱ�
	printf("1. ���� ���� ���ϱ�\n");
	printf("������ ���� ���� �������� �Է��ϼ��� : ");
	scanf("%f", &r);

	circleresult = CRS(r); // CRS �Լ��� �Ѱܼ� ���

	printf("�������� %2.f �� ���� �������� %.2f �Դϴ�.\n\n", r, circleresult); // ��� ���

	// 2. �ﰢ���� ���� ���ϱ�

	float w, h, triangleresult; // �ﰢ���� ������ ���ϱ� ���� �ʿ��� ���� ���� w : ����, h : ����, triangleresult : ���

								// �ʿ��� �� �Է� �ޱ�
	printf("2. �ﰢ�� ���� ���ϱ�\n");
	printf("�ﰢ���� ���� ���̸� �Է��ϼ��� : ");
	scanf("%f", &w);

	printf("�ﰢ���� ���̸� �Է��ϼ��� : ");
	scanf("%f", &h);

	triangleresult = TRS(w, h); // TRS �Լ��� �Ѱܼ� ���

	printf("���ΰ� %2.f �̰� ���̰� %2.f �� �ﰢ���� ������ %.2f �Դϴ�.\n\n", w, h, triangleresult); // ������

	return 0;
}


// ���� ����� ���� �Լ� ����

float CRS(float r)
{
	float circleresultsolution;
	circleresultsolution = r * r * PI;
	return circleresultsolution;
}

float TRS(float w, float h)
{
	float triangleresultsolution;
	triangleresultsolution = (w + h) / 2;
	return triangleresultsolution;
}