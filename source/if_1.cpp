#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	char val1;

	printf("��ȯ�� ���ĺ��� �Է��Ͻʽÿ� : ");
	scanf("%c", &val1);
	if (val1 >='A' && val1 <= 'Z')
	{
		printf("\n�빮���Դϴ�.\n");
		printf("�ҹ��ڴ� %c�Դϴ�.\n", val1 + 32);
	}
	else if (val1 >= 'a' && val1 <='z')
	{
		printf("\n�ҹ����Դϴ�.\n");
		printf("�빮�ڴ� %c�Դϴ�.\n", val1 - 32);
	}
	else
	{
		printf("�߸��Է��ϼ̽��ϴ�.\n");
	}

	return 0;

}