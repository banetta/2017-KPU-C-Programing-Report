#include <stdio.h>

int main() {
	int a, b, result_and, result_bit_and, result_or, result_bit_or, result_not, result_not1;
	a = 205; // 1100 1101
	b = 190; // 1011 1110

	printf("테스트 값 a = %d(%x), b = %d(%x)", a, a, b, b);
	
	result_and = a && b; // 논리 AND
	result_bit_and = a & b; // 비트 논리 AND
	result_or = a || b; // 논리 OR
	result_bit_or = a | b; // 비트 논리 OR
	result_not = ~a; // 비트 논리 NOT
	result_not1 = ~a + 1; // 비트 논리 NOT을 이용해 양수를 음수로 표현


	printf("논리 AND result = %d \n", result_and);
	printf("비트논리 AND result2 = %d(%x) \n", result_bit_and, result_bit_and);
	printf("논리 OR result3 = %d \n", result_or);
	printf("비트논리 OR result4 = %d(%x) \n", result_bit_or, result_bit_or);
	printf("비트논리 NOT result_not = %d(%x)\n", result_not, result_not);
	printf("비트논리 NOT result_not1 = %d(%x)\n", result_not1, result_not1);


	return 0;

}