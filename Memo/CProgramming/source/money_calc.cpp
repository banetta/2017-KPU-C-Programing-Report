#include <stdio.h>

int main() {

	int money, pay, i, notebook;
	money = 0;
	i = 1;
	printf("���л� ������ �ֽ� ��Ʈ���� ����� �Ƹ�����Ʈ�� �Ѵ�.\n��� ���ϸ� ���� �����ұ�?\n");
	printf("���� : ����\n");
	printf("�����Ϸ��� ��Ʈ�� ���� ���ΰ���? : ");
		scanf_s("%d", &notebook);
	printf("�Ƹ�����Ʈ �ӱ��� �Է��ϼ���. : ");
		scanf_s("%d", &pay);
	
	while (true)
	{
		money = money + pay;
		printf("%d���� ������ : %d\n", i++, money);
		
		if (money >= notebook)
		{
			break;
		}
	}
	printf("%d���� ���ϸ� �� %d������ �� ������ �����ϴ�.\n", i-1, money);

	return 0;

}