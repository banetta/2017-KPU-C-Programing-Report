#pragma warning (disable:4996)
#include <stdio.h> //printf() 정보 획득
#include <time.h>// clock_t 정보 획득

/*
// 실수로 사용
int	main()
{
	double	f1; //실수 저장.. 32bit
	clock_t tStart, tEnd;
	f1 = 0.123;
	tStart = clock(); // 시작시간 측정

	for (int i=0; i<10000000; i++)
	{
		f1 = f1 * 0.1342;
	}
	
	tEnd = clock(); // 끝나는 시간 측정


	printf("f1 = %lf \n", f1);
	printf("time = %0.20lf ns\n", (double)(tEnd - tStart));
	return 0;
}
*/
int	main()
{
	int	f1; //정수 저장.. 32bit
	clock_t tStart, tEnd;
	f1 = 12;
	tStart = clock(); // 시작시간 측정

	for (int i = 0; i<10000000; i++)
	{
		f1 = f1 * 2;
	}

	tEnd = clock(); // 끝나는 시간 측정


	printf("f1 = %lf \n", f1);
	printf("time = %0.20lf ns\n", (double)(tEnd - tStart));
	return 0;
}