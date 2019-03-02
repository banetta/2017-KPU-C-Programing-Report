#include <stdio.h>

int main() {

	int start, end, i;
	
	printf("시작과 끝을 입력하세요 : ");
	scanf_s("%d%d", &start, &end);
	i = start;
	while (i<end+1)
	{
		printf("%d ", i++);
	}
	return 0;
}