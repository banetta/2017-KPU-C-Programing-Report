#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	
	int grade;
		
	while (true)
	{
		printf("����� ������ �Է��ϼ��� : ");
		scanf("%d", &grade);

		if (grade >= 95 && grade <= 100)
		{
			printf("\n����� ������ A+ �Դϴ�.\n\n"); // 90 ~ 100
		}
		else if (grade >= 90 && grade < 95)
		{
			printf("\n����� ������ A �Դϴ�.\n\n"); // 80 ~ 89
		}
		else if (grade >= 85 && grade < 90)
		{
			printf("\n����� ������ B+ �Դϴ�.\n\n"); // 80 ~ 89
		}
		else if (grade >= 80 && grade < 85)
		{
			printf("\n����� ������ B �Դϴ�.\n\n"); // 80 ~ 89
		}
		else if (grade >= 75 && grade < 80)
		{
			printf("\n����� ������ C+ �Դϴ�.\n\n"); // 80 ~ 89
		}
		else if (grade >= 70 && grade < 75)
		{
			printf("\n����� ������ C �Դϴ�.\n\n"); // 70 ~ 79
		}
		else if (grade >= 0 && grade < 70)
		{
			printf("\n����� ������ F �Դϴ�.\n\n"); // 0 ~ 69
		}
		else
		{
			printf("\n������ �߸� �Է��ϼ̽��ϴ�.\n\n");
			break;	
		}
		
	}
	return 0;
}