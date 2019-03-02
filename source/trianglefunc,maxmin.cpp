#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

// 아래에 있는 함수 정보를 불러오기 위한 헤더 작성 (main 함수가 맨 위로 올라올 수 있게 작성해준다)
void max(int a, int b);
void min(int a, int b);

int main() {
	/*
	// math 함수 불러와서 사용해보기
	double value;
	double PI = 3.1415921828;
	for (double value = 1;  value <= 100;  value++)
	{
		// 함수를 한번 사용해 봅시다.
		// sin(), cos(), tan()
		printf("sin : %lf, cos : %lf, tan : %lf\n", sin(value*PI), cos(value*PI), tan(value*PI));
	}

	return 0;
	*/

	// 큰 수 작은 수 비교 함수 만들기
	// 두 수 저장 변수 a, b 선언
	int a, b;

	while (true) {
		// 1. 두 수를 입력 받기 -> a, b 에 저장
		printf("두 수를 입력하세요 : ");
		scanf("%d%d", &a, &b);

		// 2.1 별도 함수로 출력
		max(a, b);
		min(a, b);

		// 2. 계산(4칙연산) max, min (main내에서 해결)
		//    큰 수와 작은 수를 찾아서 출력하기.
		/*
		if (a>b)
		{
			printf("큰 수는 %d 입니다.\n", a);
			printf("작은 수는 %d 입니다.\n", b);
		}
		else if (a<b)
		{
			printf("큰 수는 %d 입니다.\n", b);
			printf("작은 수는 %d 입니다.\n", a);
		}
		else
		{
			printf("같습니다.\n");
			break;
		}
		*/
			
	}
}
// 2.1 별도 함수로 작성하기
// 함수 구조 : 이름(입력){몸통}
// max()
// 입력 : a, b 를 받을 그릇을 넣어준다
// ex) void max(int a, int b)
void max(int a,int b) {
	if (a>b)
	{
		printf("큰 수는 %d 입니다.\n", a);
	}
	else if (a<b)
	{
		printf("큰 수는 %d 입니다.\n", b);
	}
	else
	{
		printf("error\n");
	}
}

void min(int a,int b) {
	if (a>b)
	{
		printf("작은 수는 %d 입니다.\n", b);
	}
	else if (a<b)
	{
		printf("작은 수는 %d 입니다.\n", a);
	}
	else
	{
		printf("error\n");
	}
}