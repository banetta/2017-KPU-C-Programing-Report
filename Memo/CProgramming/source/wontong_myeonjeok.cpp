#pragma	warning (disable:4996)
#include <stdio.h>
#define PI 3.1415921828 // 리터럴 상수 입력

int main()
{
	// 변수 선언, 메모리 공간 마련
	
	float r = 20;	// 반지름
	float h = 7;	// 높이
	float myeonjeok, wontong;
	
	// 원의 면적

	myeonjeok = r * r * PI;

	// 원통의 면적

	wontong = myeonjeok * h;
	
	
	printf("결과\n - 면적 : %.2f\n - 원통 : %.2f\n", myeonjeok, wontong);

	return 0;
}