#include <stdio.h>

int main(void) {
	int num = 0;  // 변수 선언 후 초기화
	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &num);  // 변수에 값을 선택해서 넣음
	if (num == 0) {  // 변수에 있는 값과 비교하여 알맞은 값을 출력함
		printf("zero");
	}
	else if (num == 1) {
		printf("one");
	}
	else if (num == 2) {
		printf("two");
	}
	else {
		printf("not 0 ~ 2");
	}
	return 0;
}