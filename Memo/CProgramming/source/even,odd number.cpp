#include <stdio.h>
#pragma warning(disable:4996)

// countinue ��
int main() {
	/*
	int value;
	// value : 1 ~ 20
	for (value = 1; value  <= 20; value ++)
	{
		// ¦���� ����ϱ� : 2,4,6,8...,20
		// Ȧ���� ������ �������� ����
		if ((value%2)==1) // Ȧ��
		{
			continue; // loop�� ���ۺκ����� �̵�
		}
		printf("value : %d\n", value);
	}
	*/
	// value : 1 ~ 100
	for (int value = 1;  value <= 100;  value++)
	{
		printf("%3d ", value);

		if ((value%10)==0)
		{
			printf("\n");
		}
	}
}