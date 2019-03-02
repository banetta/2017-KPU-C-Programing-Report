#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	char val1;

	printf("변환할 알파벳을 입력하십시요 : ");
	scanf("%c", &val1);
	if (val1 >='A' && val1 <= 'Z')
	{
		printf("\n대문자입니다.\n");
		printf("소문자는 %c입니다.\n", val1 + 32);
	}
	else if (val1 >= 'a' && val1 <='z')
	{
		printf("\n소문자입니다.\n");
		printf("대문자는 %c입니다.\n", val1 - 32);
	}
	else
	{
		printf("잘못입력하셨습니다.\n");
	}

	return 0;

}