#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
#define PI	3.1415921828

int main() {
	// ���α׷� : sin �׷��� �׸���
	double g, result;
	int a;

	g = 0.0; // �Ǽ� �ʱⰪ

	while (true)
	{
		result = 20 * sin(g);
		a = result; // -1, 0, 1
		a = a + 20; // 0, 1, 2
		
		for (int i = 0; i < a; i++)
		{
			printf(" ");
		}
		printf("*\n");
		g = g + (double)PI / (double)20;
	}


	return 0;
}