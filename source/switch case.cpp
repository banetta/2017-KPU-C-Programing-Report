#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	// 1:mon, 2:tues, 3:wed..., 7:sun
	// �Է°� : 1~7
	int day;
	while (true)
	{
		printf("������ �Է��ϼ���(1~7) : ");
		scanf("%d", &day);

		switch (day) // �񱳱��� ��� �Ұ�
		{
		case 1:
			printf("�������Դϴ�.\n");
			break;
		case 2:
			printf("ȭ�����Դϴ�.\n");
			break;
		case 3:
			printf("�������Դϴ�.\n");
			break;
		case 4:
			printf("������Դϴ�.\n");
			break;
		case 5:
			printf("�ݿ����Դϴ�.\n");
			break;
		case 6:
			printf("������Դϴ�.\n");
			break;
		case 7:
			printf("�Ͽ����Դϴ�.\n");
			break;
		default:
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			return 0;
		}
		/*
		if (day==1)
		{
			// 1
			printf("�������Դϴ�.\n");
		}
		else if (day==2)
		{
			printf("ȭ�����Դϴ�.\n");
		}
		else if (day==3)
		{
			printf("�������Դϴ�.\n");
		}
		else if (day==4)
		{
			printf("������Դϴ�.\n");
		}
		else if (day==5)
		{
			printf("�ݿ����Դϴ�.\n");
		}
		else if (day==6)
		{
			printf("������Դϴ�.\n");
		}
		else if (day==7)
		{
			printf("�Ͽ����Դϴ�.\n");
		}
		else {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			break;
		}
		*/
	}
	return 0;
}