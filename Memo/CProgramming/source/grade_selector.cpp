#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	
	int grade;
		
	while (true)
	{
		printf("당신의 성적을 입력하세요 : ");
		scanf("%d", &grade);

		if (grade >= 95 && grade <= 100)
		{
			printf("\n당신의 성적은 A+ 입니다.\n\n"); // 90 ~ 100
		}
		else if (grade >= 90 && grade < 95)
		{
			printf("\n당신의 성적은 A 입니다.\n\n"); // 80 ~ 89
		}
		else if (grade >= 85 && grade < 90)
		{
			printf("\n당신의 성적은 B+ 입니다.\n\n"); // 80 ~ 89
		}
		else if (grade >= 80 && grade < 85)
		{
			printf("\n당신의 성적은 B 입니다.\n\n"); // 80 ~ 89
		}
		else if (grade >= 75 && grade < 80)
		{
			printf("\n당신의 성적은 C+ 입니다.\n\n"); // 80 ~ 89
		}
		else if (grade >= 70 && grade < 75)
		{
			printf("\n당신의 성적은 C 입니다.\n\n"); // 70 ~ 79
		}
		else if (grade >= 0 && grade < 70)
		{
			printf("\n당신의 성적은 F 입니다.\n\n"); // 0 ~ 69
		}
		else
		{
			printf("\n성적을 잘못 입력하셨습니다.\n\n");
			break;	
		}
		
	}
	return 0;
}