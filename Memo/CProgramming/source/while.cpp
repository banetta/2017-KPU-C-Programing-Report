#include <stdio.h>
#pragma warning <disable:4996>

int main() {

int a = 0;

// 반복하기

while (true) // true : 항상 참 (무한반복), 그외에는 조건식 사용
{
printf("반복하기 %d\n", a++);
if (a == 10000)
{
break;
}
}

return 0;

}

