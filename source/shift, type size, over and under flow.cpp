#include <stdio.h>
#pragma warning (disable:4996)
/*
int main()
{
	char a, b, result; // char 8비트 정수

	a = 0xa; // 십진수 10
	b = 0x7; 
	
	result = a&b; // 비트연산 AND
	
	printf("result = %x \n", result);
	
	result = a | b; // 비트연산 OR

	printf("result = %x \n", result);

	result = a^b;
	
	printf("result = %x \n", result);

	return 0;

}
*/
/*
int main(){
	char a, result; // char 8비트 정수
	/*
	a = 0x1; // 십진수 1
	result = a << 1; // 쉬프트 << 1

	printf("result = %x(%d) \n", result, result);
	
	result = a << 2; // 쉬프트 << 2

	printf("result = %x(%d) \n", result, result);

	result = a << 3; // 쉬프트 << 3

	printf("result = %x(%d) \n", result, result);

	result = a << 4; // 쉬프트 << 4

	printf("result = %x(%d) \n", result, result);

	result = a << 5; // 쉬프트 << 5

	printf("result = %x(%d) \n", result, result);

	result = a << 6; // 쉬프트 << 6

	printf("result = %x(%d) \n", result, result);

	result = a << 7; // 쉬프트 << 7 이때 맨 앞 비트가 1이되면서 음수로 인식되어 1의 보수를 취한 후 +1을 하여 -128의 결과값을 가진다.

	printf("result = %x(%d) \n", result, result);

	result = a << 8; // 쉬프트 << 8

	printf("result = %x(%d) \n", result, result);

	for (char i; i = 0; i < 8 i++)
	{
		result = a << i;
		printf("result = %x(%d) \n", result, result);
	}
	
	
	a = -0x10; // 십진수 16
	result = a >> 1; // 쉬프트 1 오른쪽

	printf("result = %x(%d) \n", result, result);

	for (int i = 0; i < 9; i++)
	{
		result = a >> i;
		printf("result = %x(%d) \n", result, result);
	
	}
	

	return 0;

}
*/
/*
int main() {

	char num1 = 10; 
	short num2 = 20; 
	int num3 = 30; 
	long num4 = 40;

	printf("\n--------정수형 자료형과 변수의 메모리 크기--------\n"); 
	printf("char형의 크기 %d바이트, %d바이트 \n", sizeof(char), sizeof(num1) ); 
    printf("short형의 크기 %d바이트, %d바이트 \n", sizeof(short), sizeof(num2) ); 
	printf("int형의 크기 %d바이트, %d바이트 \n", sizeof(int), sizeof(num3)); 
	printf("long형의 크기 %d바이트, %d바이트 \n", sizeof(long), sizeof(num4) );

	float num5 = 3.14;
	double num6 = 3.15;
	long double num7 = 3.17;

	printf("\n--------실수형 자료형과 변수의 메모리 크기--------\n"); 
	printf("float형의 크기 %d바이트, %d바이트 \n", sizeof(float), sizeof(num5) );
	printf("double형의 크기 %d바이트, %d바이트 \n", sizeof(double), sizeof(num6)); 
	printf("long double형의 크기 %d바이트, %d바이트 \n", sizeof(long double), sizeof(num7));

	return 0;
}
*/
/*
#include <math.h>
int main() {

	char a;
	double result;
	result = sin( 3.141592 / 2.0 );

	printf("sin = %lf \n", result);

	return 0;
}
*/

int main() {

	char num1 = -129; // 최솟값(-128)보다 -1만큼 작은 값 저장(언더플로우)
	char num2 = 128; // 최댓값(127)보다 +1만큼 큰 값 저장(오버플로우)

	printf("%d \n", num1); // 127 출력
	printf("%d \n", num2); // -128 출력
	
	num1 = -130; // 최솟값(-128)보다 -2만큼 작은 값 저장(언더플로우)
	num2 = 129; // 최댓값(127)보다 +2만큼 큰 값 저장(오버플로우)

	printf("%d \n", num1); // 126 출력
	printf("%d \n", num2); // -127 출력

	return 0;
}