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

	printf("result1�� ����� �� %d \n", result1);
	printf("result2�� ����� �� %d \n", result2);
	printf("result3�� ����� �� %d \n", result3);
	printf("result4�� ����� �� %d \n", result4);

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

	printf("result1�� ����� �� %d \n", result1); // 1(��)
	printf("result2�� ����� �� %d \n", result2); // 0(����)
	printf("result3�� ����� �� %d \n", result3); // 0(����)

	return 0;

}
*/

int main()
{
	int input; // ����� ���ð�
	
	// ���� ����
	// 1: �ݶ� ���, 2: ���̴� ���
	
	printf("���ð��� �Է��ϼ���\n1. �ݶ� 2. ���̴� : ");
	scanf_s("%d",&input);
	
	// if�� ���

	if (input==1){
		int coke;
		printf("1. ŷ���ݶ� 2. ŷ��\n");
		printf("���? : ");
		scanf_s("%d", &coke);
		if (coke==1){
			printf("ŷ�� ¯¯��\n");
		}
		else if (coke==2){
			printf("ŷ���ݶ� �տ��� ����..\n");
		}
		else{
			printf("�׷��� ����\n");
		}
	}
	else if(input==2){
		int cider;
		printf("1. ĥ�����̴� 2. ��������Ʈ\n");
		printf("���? : ");
		scanf_s("%d", &cider);
		if (cider==1){
			printf("��������Ʈ ���� �ϽǷ���?\n");
		}
		else if (cider==2){
			printf("ĥ�����̴� �տ��� ����..\n");
		}
		else{
			printf("�׷��� ����\n");
		}

	}
	else{
		printf("�׷��� ����\n");
	}
	/*	
	// ����¥���� �����
	int result;
	result = (input == 1) ? printf("�ݶ�\n") : (input == 2)? printf("���̴�\n") : printf("�׷��� ����\n");
	*/

	return 0;
}