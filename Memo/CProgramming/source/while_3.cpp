#include <stdio.h>

int main() {

	int start, end, i;
	
	printf("���۰� ���� �Է��ϼ��� : ");
	scanf_s("%d%d", &start, &end);
	i = start;
	while (i<end+1)
	{
		printf("%d ", i++);
	}
	return 0;
}