#include <stdio.h>
#pragma warning (disable:4996)
/*
int main() {
	
	int i, j;
	i = 0;
	
	while (i<9)
	{
		j = 9;
		while (j>i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}
*/
/*
int main() {

	int i = 2, j, result;

	while (i<10)
	{
		printf("%d��\n", i);
		j = 1;
		while (j<10)
		{
			result = i*j;
			printf("%d * %d = %d\n", i, j, result);
			j++;
		}
		i++;
	}
	return 0;
}
*/
/*
int main() {
	
	for (int i = 2; i < 10; i++)
	{
		printf("%d��\n", i);

		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
int main() {
	
	for (int i = 1; i < 10; i++)
	{
		
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
*/
/*
int main() {
	// ���� : ���� ���Ͻÿ�.
	int sum = 0;
	// ���� ���� : 1~10 �� 55
	int start, end, check, test;
	printf("Ȧ����� 0, ¦����� 1 : ");
	scanf("%d", &check);
	printf("���� ���� �Է� : ");
	scanf("%d", &start);
	printf("�� ���� �Է� : ");
	scanf("%d", &end);
	test = start / 2;
	if (check=0)
	{
		if (test=0)
		{
			for (int i = start; i < end + 1; i=i+2)
			{
				sum = sum + i;
			}
		}
		else if (test=1)
		{
			for (int i = start+1; i < end + 1; i=i+2)
			{
				sum = sum + i;
			}
		}
		
	}
	else if (check=1)
	{
		if (test = 0)
		{
			for (int i = start ; i < end + 1; i = i + 2)
			{
				sum = sum + i;
			}
		}
		else if (test = 1)
		{
			for (int i = start+1; i < end + 1; i = i + 2)
			{
				sum = sum + i;
			}
		}
	}
	printf("��� �� : %d\n", sum);
	return 0;
}
*/
/*
int main() {
	// �ݺ� ������
	// ����, ���� �Է� : n, ��� : n!
	int n, fact;
	while (true)
	{
		// �Է�
		printf("���ڸ� �Է��ϼ���(n!) : ");
		scanf("%d", &n);
		// factorial ���ϱ�
		// ex) 5! = 1*2*3*4*5
		fact = 1;
		// cnt ���� 1~n
		for (int cnt = 1; cnt <= n; cnt++)
		{
			fact = fact * cnt;
		}
		printf("%d! = %d\n", n, fact);
		if (n == 0)
		{
			break;
		}
	}
	
}
*/

int main() {
	
	int h, i, j; // ���� ���� : h(�ﰢ���� ����) i(ī��Ʈ ����) j(�ι�° ī��Ʈ ����)

	while (true)
	{
		// 1. �Է� �ޱ� - �ﰢ���� ����
		printf("�ﰢ���� ����(h)�� �Է��ϼ���. : ");
		scanf("%d", &h); // scanf���� �Է°��� ��� ��û

		// 2. ���̸� ��� �ﰢ�� �׸���
		i = 1; // i ���� �ʱ�ȭ
		do
		{
			j = 1;
			while (j <= i) // �ι�° ī��Ʈ ���� : j, 1~i (���� ��� ����)
			{
				printf("*");
				j++;
			}
			printf("\n");
			i++;
		} while (i <= h); // ù��° ī��Ʈ ���� : i, 1~5 (��ü �ݺ� ����)
		// 3. �ݺ� ���߱� ���� ���� Ȯ��
		// ���� �������̳�? (���α׷��� �ݵ�� ��������)
		if (h==0) // ���ߴ� ���� Ȯ��
		{
			break; // ���� ����� �ݺ����� Ż��
		}
	}

	return 0;

}