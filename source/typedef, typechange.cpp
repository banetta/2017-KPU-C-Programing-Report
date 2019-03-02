#include <stdio.h>
#pragma warning (disable:4996)
/*
int main() {

	int a, b;
	double d;
	a = 50;
	d = a; // 컴파일러의 의한 자동형변환
	d = d / (double)23; // 프로그래머의 의한 강제형변환

	printf("d = %lf \n", d);
	
	b = d; // d = 2.17

	printf("b = %d \n", b);

	return 0;
}
*/
typedef int money; // 자료형 재정의
int main() {

	money a, b;
	double d;

	a = 5;
	b = 2;
	d = (double)5 / 2;
	
	printf("d = %lf \n", d);

	return 0;

}
