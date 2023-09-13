#include <stdio.h>

int main(void) {
	int x = 4;  //정수형 x와 y 변수를 선언함과 동시에 초기화
	int y = 2;
	int z;  //정수형 변수 z를 선언

	z = x + y;  //정수형 변수 z에 x + y의 값을 대입
	printf("z = x + y = %d\n", z);  //서식지정자를 통해서 x + y의 값을 출력

	z = x - y;  //정수형 변수 z에 x - y의 값을 대입
	printf("z = x - y = %d\n", z);  //서식지정자를 통해서 x - y의 값을 출력

	z = x * y;  //정수형 변수 z에 x * y의 값을 대입
	printf("z = x * y = %d\n", z);  //서식지정자를 통해서 x * y의 값을 출력

	z = x / y;  //정수형 변수 z에 x / y의 값을 대입
	printf("z = x / y = %d\n", z);  //서식지정자를 통해서 x / y의 값을 출력

	return 0;  //리턴값을 반환하여 함수의 끝을 알림
}