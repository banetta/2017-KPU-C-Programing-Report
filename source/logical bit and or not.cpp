#include <stdio.h>

int main() {
	int a, b, result_and, result_bit_and, result_or, result_bit_or, result_not, result_not1;
	a = 205; // 1100 1101
	b = 190; // 1011 1110

	printf("�׽�Ʈ �� a = %d(%x), b = %d(%x)", a, a, b, b);
	
	result_and = a && b; // �� AND
	result_bit_and = a & b; // ��Ʈ �� AND
	result_or = a || b; // �� OR
	result_bit_or = a | b; // ��Ʈ �� OR
	result_not = ~a; // ��Ʈ �� NOT
	result_not1 = ~a + 1; // ��Ʈ �� NOT�� �̿��� ����� ������ ǥ��


	printf("�� AND result = %d \n", result_and);
	printf("��Ʈ�� AND result2 = %d(%x) \n", result_bit_and, result_bit_and);
	printf("�� OR result3 = %d \n", result_or);
	printf("��Ʈ�� OR result4 = %d(%x) \n", result_bit_or, result_bit_or);
	printf("��Ʈ�� NOT result_not = %d(%x)\n", result_not, result_not);
	printf("��Ʈ�� NOT result_not1 = %d(%x)\n", result_not1, result_not1);


	return 0;

}