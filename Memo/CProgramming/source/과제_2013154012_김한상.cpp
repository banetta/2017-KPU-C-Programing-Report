/*
과제

1. 원의 면적 구하기
- 반지름을 입력으로 받아서 면적을 구해서 출력하시오.

2. 삼각형의 면적 구하기
- 밑변과 높이를 입력으로 받아서 면적을 구해서 출력하시오.

*/
#pragma warning (disable:4996) // VS2017 환경에서 scanf 함수 오류 해제
#include <stdio.h>
#define	PI 3.14159265359 // PI를 리터럴 상수로 선언

float CRS(float r), TRS(float w, float h);

// 1. main 안에서 전부 해결

/*
int main()
{
// 1. 원의 면적 구하기

float r, circleresult; // 원의 면적을 구하기 위해 필요한 변수 선언 r : 반지름, circleresult : 결과

// 필요한 값 입력 받기
printf("1. 원의 면적 구하기\n");
printf("면적을 구할 원의 반지름을 입력하세요 : ");
scanf("%f", &r);

circleresult = r * r * PI; // 반지름 계산

printf("반지름이 %2.f 인 원의 반지름은 %.2f 입니다.\n\n", r, circleresult); // 결과 출력

// 2. 삼각형의 면적 구하기

float w, h, triangleresult; // 삼각형의 면적을 구하기 위해 필요한 변수 선언 w : 가로, h : 높이, triangleresult : 결과

// 필요한 값 입력 받기
printf("2. 삼각형 면적 구하기\n");
printf("삼각형의 가로 길이를 입력하세요 : ");
scanf("%f", &w);

printf("삼각형의 높이를 입력하세요 : ");
scanf("%f", &h);

triangleresult = (w + h) / 2; // 삼각형 면적 계산

printf("가로가 %2.f 이고 높이가 %2.f 인 삼각형의 면적은 %.2f 입니다.\n\n", w, h, triangleresult); // 결과출력

return 0;
}
*/

// 2. 별도로 함수를 만들어 이용해서 해결

int main()
{
	// 1. 원의 면적 구하기

	float r, circleresult; // 원의 면적을 구하기 위해 필요한 변수 선언 r : 반지름, circleresult : 결과

						   // 필요한 값 입력 받기
	printf("1. 원의 면적 구하기\n");
	printf("면적을 구할 원의 반지름을 입력하세요 : ");
	scanf("%f", &r);

	circleresult = CRS(r); // CRS 함수로 넘겨서 계산

	printf("반지름이 %2.f 인 원의 반지름은 %.2f 입니다.\n\n", r, circleresult); // 결과 출력

	// 2. 삼각형의 면적 구하기

	float w, h, triangleresult; // 삼각형의 면적을 구하기 위해 필요한 변수 선언 w : 가로, h : 높이, triangleresult : 결과

								// 필요한 값 입력 받기
	printf("2. 삼각형 면적 구하기\n");
	printf("삼각형의 가로 길이를 입력하세요 : ");
	scanf("%f", &w);

	printf("삼각형의 높이를 입력하세요 : ");
	scanf("%f", &h);

	triangleresult = TRS(w, h); // TRS 함수로 넘겨서 계산

	printf("가로가 %2.f 이고 높이가 %2.f 인 삼각형의 면적은 %.2f 입니다.\n\n", w, h, triangleresult); // 결과출력

	return 0;
}


// 면적 계산을 위한 함수 선언

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