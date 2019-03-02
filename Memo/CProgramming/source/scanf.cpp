#pragma warning	(disable:4996) //Visual Studio 2017 환경에서 scanf 에러 해결을 위해 추가
#include <stdio.h>
int main(void)
{
	
	// 기본적인 scanf 사용 예
	int age, height;

	printf("What is your age & height?: ");
	scanf("%d%d", &age, &height);
	printf("Wow! Really? Are you %d years old?\n Wow! Really? Are you %d height?", age, height);
	
	int a, b, c;

	printf("10진수 정수 1개 입력 : ");
	scanf("%d", &a);
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", a, a, a);
		
	printf("16진수 정수 1개 입력 : ");
	scanf("%x", &b);
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", b, b, b);
		
	printf("8진수 정수 1개 입력 : ");
	scanf("%o", &c); 
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", c, c, c);
		
	float f1, f2;
	double d1, d2;

	printf("float형 실수 두 개 입력 : ");
	scanf("%f %e", &f1, &f2);
	printf("float형 실수 출력 : f1=%f, f2=%e\n", f1, f2);

	printf("double형 실수 두 개 입력 : ");
	scanf("%lf %le", &d1, &d2);
	printf("double형 실수 출력 : d1=%lf, d2=%le\n", d1, d2);


	return 0;
}
