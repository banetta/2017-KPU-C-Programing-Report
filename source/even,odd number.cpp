#include <stdio.h>
#pragma warning(disable:4996)

// countinue 문
int main() {
	/*
	int value;
	// value : 1 ~ 20
	for (value = 1; value  <= 20; value ++)
	{
		// 짝수만 출력하기 : 2,4,6,8...,20
		// 홀수면 다음을 실행하지 마쇼
		if ((value%2)==1) // 홀수
		{
			continue; // loop의 시작부분으로 이동
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