#include <stdio.h>

int data_a = 100;
int data_b = 200;
static int data_c = 300; // 외부에서 참조하지 못하게 해줌

void PrintData() {
	printf("a:%d, b:%d, c:%d\n", data_a, data_b, data_c);
}