#pragma warning (disable:4996)
#include <stdio.h> //printf() ���� ȹ��
#include <time.h>// clock_t ���� ȹ��

/*
// �Ǽ��� ���
int	main()
{
	double	f1; //�Ǽ� ����.. 32bit
	clock_t tStart, tEnd;
	f1 = 0.123;
	tStart = clock(); // ���۽ð� ����

	for (int i=0; i<10000000; i++)
	{
		f1 = f1 * 0.1342;
	}
	
	tEnd = clock(); // ������ �ð� ����


	printf("f1 = %lf \n", f1);
	printf("time = %0.20lf ns\n", (double)(tEnd - tStart));
	return 0;
}
*/
int	main()
{
	int	f1; //���� ����.. 32bit
	clock_t tStart, tEnd;
	f1 = 12;
	tStart = clock(); // ���۽ð� ����

	for (int i = 0; i<10000000; i++)
	{
		f1 = f1 * 2;
	}

	tEnd = clock(); // ������ �ð� ����


	printf("f1 = %lf \n", f1);
	printf("time = %0.20lf ns\n", (double)(tEnd - tStart));
	return 0;
}