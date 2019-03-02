#include <stdio.h>

int b;
// 재귀함수 (Recursive var.)
int fact(int n);
void func(void);
int main() {
	//func();

	int result, n;
	while (true) {
		printf("factorial : ");
		scanf_s("%d", &n);
	
		result = fact(n);
		printf(" %d ! = %d\n", n, result);
	}
	return 0;
}

void func(void) {

	b++;
	int a = 0; // 지역변수, 스택에 저장
	a++;
	printf("함수 func()가 호출되었습니다. a = %d, b = %d\n", a, b);
	// func(); // 내가 나를 다시 호출.. 재귀함수
	// 무한적인 재귀함수로 인해 계속된 변수 선언으로 스택 오버플로우가 발생한다.
	// warning C4717: 'func': 모든 제어 경로에서 재귀적입니다. 함수로 인해 런타임 스택 오버플로가 발생합니다.

	// 스택 오버플로우를 방지하기 위해 재귀 함수의 호출 횟수 제한 (방법은 여러가지)
	if (b < 10)
	{
		func();
	}
	
	// 재귀 함수가 사용되는 예
	// factorial 함수
	// 5! = 5 * 4 * 3 * 2 * 1 = 5 * 4!
	// fact(5) = 5 * fact(4)
}

int fact(int n)
{
	int result;
	if (n == 0)
	{
		return 0;
	}
	if (n == 1) // 끝나는 조건 명시
	{
		return 1;
	}
	result = n * fact(n - 1);
	return result;
}