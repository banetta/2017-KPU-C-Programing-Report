#include <stdio.h>
#pragma warning <disable:4996>

int main() {

int a = 0;

// �ݺ��ϱ�

while (true) // true : �׻� �� (���ѹݺ�), �׿ܿ��� ���ǽ� ���
{
printf("�ݺ��ϱ� %d\n", a++);
if (a == 10000)
{
break;
}
}

return 0;

}

