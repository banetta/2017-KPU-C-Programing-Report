#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	// 1:mon, 2:tues, 3:wed..., 7:sun
	// 입력값 : 1~7
	int day;
	while (true)
	{
		printf("요일을 입력하세요(1~7) : ");
		scanf("%d", &day);

		switch (day) // 비교구문 사용 불가
		{
		case 1:
			printf("월요일입니다.\n");
			break;
		case 2:
			printf("화요일입니다.\n");
			break;
		case 3:
			printf("수요일입니다.\n");
			break;
		case 4:
			printf("목요일입니다.\n");
			break;
		case 5:
			printf("금요일입니다.\n");
			break;
		case 6:
			printf("토요일입니다.\n");
			break;
		case 7:
			printf("일요일입니다.\n");
			break;
		default:
			printf("잘못입력하셨습니다.\n");
			return 0;
		}
		/*
		if (day==1)
		{
			// 1
			printf("월요일입니다.\n");
		}
		else if (day==2)
		{
			printf("화요일입니다.\n");
		}
		else if (day==3)
		{
			printf("수요일입니다.\n");
		}
		else if (day==4)
		{
			printf("목요일입니다.\n");
		}
		else if (day==5)
		{
			printf("금요일입니다.\n");
		}
		else if (day==6)
		{
			printf("토요일입니다.\n");
		}
		else if (day==7)
		{
			printf("일요일입니다.\n");
		}
		else {
			printf("잘못입력하셨습니다.\n");
			break;
		}
		*/
	}
	return 0;
}