#include <stdio.h>
#pragma warning(disable:4996)

// 변수 종류 : 지역 변수 (local var.), 전역 변수 (global var.), 정적 변수 (static var.), 외부 변수 (extern var.), 레지스터 변수 (Register var.)

// 외부 변수 (extern var.)
// 특징
// - 외부 파일에 선언된 변수를 참조하는 변수
// - 자료형 앞에 extern 키워드 사용
// - 다른 파일(외부)에 있는 전역 변수 참조

extern int data_a; // extern 선언을 지우면 variable_data에 이미 선언되어있으므로 중복 정의된 변수로 처리한다.
//extern int data_c; // 오류 : "int data_c" 외부 기호를 확인할 수 없습니다.

// 전역 변수 (global var.)
// 특징
// - 모든 함수에서 인식 가능
// - 초기화 : 자동으로 0으로 설정
// - 생존 시간 : 프로그램 끝날 때 까지 지속
// - 할당 장소 : 메모리 내 data 영역에 할당
// - 컴파일방식으로 순차적으로 처리된 값이 계속 남아있음

int a;
void func_A(void);
void func_B(void);
void func_C(void);
void PrintData(void); // 외부 파일에 있는 함수 호출

int main() {
	// 지역변수 (local var.) - 방 안에 선언된 변수
	// 특징
	// - 초기화 : 쓰레기 값
	// - 생존 시간 : 방 만들어지고, 방 나갈때 까지
	// - 할당 장소 : 메모리 내 stack에 할당
	int b = 0;
	func_A();
	func_B();
	func_C();
	func_C();
	func_C();
	printf("[main] a = %d\n", a);
	printf("[main] b = %d\n", b);
	printf("[main] 1. data_a : %d\n", data_a);
	data_a++;
	printf("[main] 2. data_a : %d\n", data_a);
	PrintData(); // data_a가 전역 변수이기 때문에 위에 수정된 값이 그대로 적용된다.
	//printf("[main] data_c : %d\n", data_c); // 오류 : LNK1120 1개의 확인할 수 없는 외부 참조입니다.

	// 레지스터 변수 (Register var.)
	// 특징
	// - 자주 사용되는 변수를 빠른 연산을 위해 캐시 메모리에 저장할 수 있도록 '요청'한다.
	// - 캐시 메모리에 빈 영역이 있을 경우에만 저장이 가능하다.
	register int i; // ppt 참고하여 작성하자

	return 0;
}

void func_A(void) {
	a++;
	printf("[func_A] a = %d\n", a);
}

void func_B(void) {
	int b = 0;
	b++;
	printf("[func_B] b = %d\n", b);
}

void func_C(void) {
	// 정적 함수 (static var.) : 지역변수이지만 전역변수처럼 값을 유지시킨다.
	// - 외부에서(만) 참조하지 못하게 해준다.
	static int c = 0;
	c++;
	printf("[func_C] c = %d\n", c);
}