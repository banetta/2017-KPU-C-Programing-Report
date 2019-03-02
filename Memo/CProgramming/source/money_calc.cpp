#include <stdio.h>

int main() {

	int money, pay, i, notebook;
	money = 0;
	i = 1;
	printf("대학생 정민은 최신 노트북을 사려고 아르바이트를 한다.\n몇개월 일하면 구입 가능할까?\n");
	printf("단위 : 만원\n");
	printf("구입하려는 노트북 값은 얼마인가요? : ");
		scanf_s("%d", &notebook);
	printf("아르바이트 임금을 입력하세요. : ");
		scanf_s("%d", &pay);
	
	while (true)
	{
		money = money + pay;
		printf("%d개월 모은돈 : %d\n", i++, money);
		
		if (money >= notebook)
		{
			break;
		}
	}
	printf("%d개월 일하면 총 %d만원이 모여 구입이 가능하다.\n", i-1, money);

	return 0;

}