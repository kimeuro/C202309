#include <stdio.h>
#define X 1  //상수값인 X와 PI 선언 후 초기화
#define PI 3.141592

int main(void) {
	double z;  //double이라는 실수형으로 z라는 변수 선언
	z = X + PI; //z에 아까 선언한 상수값 두 개를 더한 뒤 대입
	printf("%lf", z);  //서식지정자를 이용하여 z값 출력
	return 0;  //리턴값 반환으로 끝을 알림
}