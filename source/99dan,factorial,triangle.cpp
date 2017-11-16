#include <stdio.h>
#pragma warning (disable:4996)
/*
int main() {
	
	int i, j;
	i = 0;
	
	while (i<9)
	{
		j = 9;
		while (j>i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}
*/
/*
int main() {

	int i = 2, j, result;

	while (i<10)
	{
		printf("%d단\n", i);
		j = 1;
		while (j<10)
		{
			result = i*j;
			printf("%d * %d = %d\n", i, j, result);
			j++;
		}
		i++;
	}
	return 0;
}
*/
/*
int main() {
	
	for (int i = 2; i < 10; i++)
	{
		printf("%d단\n", i);

		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
int main() {
	
	for (int i = 1; i < 10; i++)
	{
		
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
*/
/*
int main() {
	// 문제 : 합을 구하시오.
	int sum = 0;
	// 합의 범위 : 1~10 합 55
	int start, end, check, test;
	printf("홀수계산 0, 짝수계산 1 : ");
	scanf("%d", &check);
	printf("시작 값을 입력 : ");
	scanf("%d", &start);
	printf("끝 값을 입력 : ");
	scanf("%d", &end);
	test = start / 2;
	if (check=0)
	{
		if (test=0)
		{
			for (int i = start; i < end + 1; i=i+2)
			{
				sum = sum + i;
			}
		}
		else if (test=1)
		{
			for (int i = start+1; i < end + 1; i=i+2)
			{
				sum = sum + i;
			}
		}
		
	}
	else if (check=1)
	{
		if (test = 0)
		{
			for (int i = start ; i < end + 1; i = i + 2)
			{
				sum = sum + i;
			}
		}
		else if (test = 1)
		{
			for (int i = start+1; i < end + 1; i = i + 2)
			{
				sum = sum + i;
			}
		}
	}
	printf("결과 값 : %d\n", sum);
	return 0;
}
*/
/*
int main() {
	// 반복 무한히
	// 동작, 숫자 입력 : n, 출력 : n!
	int n, fact;
	while (true)
	{
		// 입력
		printf("숫자를 입력하세요(n!) : ");
		scanf("%d", &n);
		// factorial 구하기
		// ex) 5! = 1*2*3*4*5
		fact = 1;
		// cnt 변수 1~n
		for (int cnt = 1; cnt <= n; cnt++)
		{
			fact = fact * cnt;
		}
		printf("%d! = %d\n", n, fact);
		if (n == 0)
		{
			break;
		}
	}
	
}
*/

int main() {
	
	int h, i, j; // 변수 선언 : h(삼각형의 높이) i(카운트 변수) j(두번째 카운트 변수)

	while (true)
	{
		// 1. 입력 받기 - 삼각형의 높이
		printf("삼각형의 높이(h)를 입력하세요. : ");
		scanf("%d", &h); // scanf에게 입력값을 배달 요청

		// 2. 높이를 기반 삼각형 그리기
		i = 1; // i 변수 초기화
		do
		{
			j = 1;
			while (j <= i) // 두번째 카운트 변수 : j, 1~i (별을 찍는 변수)
			{
				printf("*");
				j++;
			}
			printf("\n");
			i++;
		} while (i <= h); // 첫번째 카운트 변수 : i, 1~5 (전체 반복 변수)
		// 3. 반복 멈추기 위한 조건 확인
		// 언제 끝낼것이냐? (프로그램은 반드시 끝나야함)
		if (h==0) // 멈추는 조건 확인
		{
			break; // 가장 가까운 반복에서 탈출
		}
	}

	return 0;

}