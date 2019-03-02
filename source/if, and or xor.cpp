#include <stdio.h>
/*
int main()
{
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2);
	result2 = (num1 <= num2);
	result3 = (num1 == num2);
	result4 = (num1 != num2);

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);
	printf("result4에 저장된 값 %d \n", result4);

	return 0;
}
*/
/*
int main()
{
	int num1 = 2, num2 = 3, num3 = 5;
	int result1, result2, result3;

	result1 = (num1 > 0) && (num2 < 10);
	result2 = (num2 <= 2) || (num3 > 5);
	result3 = !num3;

	printf("result1에 저장된 값 %d \n", result1); // 1(참)
	printf("result2에 저장된 값 %d \n", result2); // 0(거짓)
	printf("result3에 저장된 값 %d \n", result3); // 0(거짓)

	return 0;

}
*/

int main()
{
	int input; // 사용자 선택값
	
	// 동작 원리
	// 1: 콜라 출력, 2: 사이다 출력
	
	printf("선택값을 입력하세요\n1. 콜라 2. 사이다 : ");
	scanf_s("%d",&input);
	
	// if문 사용

	if (input==1){
		int coke;
		printf("1. 킹갓콜라 2. 킹시\n");
		printf("어디꺼? : ");
		scanf_s("%d", &coke);
		if (coke==1){
			printf("킹시 짱짱맨\n");
		}
		else if (coke==2){
			printf("킹갓콜라 앞에서 으디..\n");
		}
		else{
			printf("그런거 읎다\n");
		}
	}
	else if(input==2){
		int cider;
		printf("1. 칠성사이다 2. 스프라이트\n");
		printf("어디꺼? : ");
		scanf_s("%d", &cider);
		if (cider==1){
			printf("스프롸이트 샤워 하실래요?\n");
		}
		else if (cider==2){
			printf("칠성사이다 앞에서 으디..\n");
		}
		else{
			printf("그런거 읎다\n");
		}

	}
	else{
		printf("그런거 읎다\n");
	}
	/*	
	// 한줄짜리로 만들기
	int result;
	result = (input == 1) ? printf("콜라\n") : (input == 2)? printf("사이다\n") : printf("그런거 읎다\n");
	*/

	return 0;
}