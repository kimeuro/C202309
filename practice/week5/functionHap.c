#include <stdio.h>

int hapf(int value);  // hapf 라는 함수 선언

int main(void) {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
	return 0;
}

int hapf(int value) {  // hapf 함수 정의
	int i = 1;  // 선언과 초기화
	int hap = 0;

	while (i <= value) {
		hap = hap + i;  // 1부터 value 값까지의 합을 hap 변수에 쌓아감
		i++;
	}
	return hap;  // hapf 함수의 반환값을 hap으로 출력함
}
