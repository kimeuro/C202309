#include <stdio.h>

int main(void) {
	int x;  //정수형 변수 x, y, z 선언
	int y;
	int z;

	x = 1;  //x 값과 y값 초기화
	y = 2;

	z = x + y;  //z 값에 x+y값 대입
	printf("%d", z);  //서식지정자를 통해 z값 출력
	return 0;  //리턴값 반환으로 코드가 끝남을 알림
}