#include <stdio.h>
#pragma warning(disable:4996)

// ���� ���� : ���� ���� (local var.), ���� ���� (global var.), ���� ���� (static var.), �ܺ� ���� (extern var.), �������� ���� (Register var.)

// �ܺ� ���� (extern var.)
// Ư¡
// - �ܺ� ���Ͽ� ����� ������ �����ϴ� ����
// - �ڷ��� �տ� extern Ű���� ���
// - �ٸ� ����(�ܺ�)�� �ִ� ���� ���� ����

extern int data_a; // extern ������ ����� variable_data�� �̹� ����Ǿ������Ƿ� �ߺ� ���ǵ� ������ ó���Ѵ�.
//extern int data_c; // ���� : "int data_c" �ܺ� ��ȣ�� Ȯ���� �� �����ϴ�.

// ���� ���� (global var.)
// Ư¡
// - ��� �Լ����� �ν� ����
// - �ʱ�ȭ : �ڵ����� 0���� ����
// - ���� �ð� : ���α׷� ���� �� ���� ����
// - �Ҵ� ��� : �޸� �� data ������ �Ҵ�
// - �����Ϲ������ ���������� ó���� ���� ��� ��������

int a;
void func_A(void);
void func_B(void);
void func_C(void);
void PrintData(void); // �ܺ� ���Ͽ� �ִ� �Լ� ȣ��

int main() {
	// �������� (local var.) - �� �ȿ� ����� ����
	// Ư¡
	// - �ʱ�ȭ : ������ ��
	// - ���� �ð� : �� ���������, �� ������ ����
	// - �Ҵ� ��� : �޸� �� stack�� �Ҵ�
	int b = 0;
	func_A();
	func_B();
	func_C();
	func_C();
	func_C();
	printf("[main] a = %d\n", a);
	printf("[main] b = %d\n", b);
	printf("[main] 1. data_a : %d\n", data_a);
	data_a++;
	printf("[main] 2. data_a : %d\n", data_a);
	PrintData(); // data_a�� ���� �����̱� ������ ���� ������ ���� �״�� ����ȴ�.
	//printf("[main] data_c : %d\n", data_c); // ���� : LNK1120 1���� Ȯ���� �� ���� �ܺ� �����Դϴ�.

	// �������� ���� (Register var.)
	// Ư¡
	// - ���� ���Ǵ� ������ ���� ������ ���� ĳ�� �޸𸮿� ������ �� �ֵ��� '��û'�Ѵ�.
	// - ĳ�� �޸𸮿� �� ������ ���� ��쿡�� ������ �����ϴ�.
	register int i; // ppt �����Ͽ� �ۼ�����

	return 0;
}

void func_A(void) {
	a++;
	printf("[func_A] a = %d\n", a);
}

void func_B(void) {
	int b = 0;
	b++;
	printf("[func_B] b = %d\n", b);
}

void func_C(void) {
	// ���� �Լ� (static var.) : �������������� ��������ó�� ���� ������Ų��.
	// - �ܺο���(��) �������� ���ϰ� ���ش�.
	static int c = 0;
	c++;
	printf("[func_C] c = %d\n", c);
}