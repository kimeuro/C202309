#include <stdio.h>

long multiF(int value);  // 함수 선언

int main(void) {
	printf("1부터 2까지의 곱은 %ld\n", multiF(2));
	printf("1부터 3까지의 곱은 %ld\n", multiF(3));
	printf("1부터 5까지의 곱은 %ld\n", multiF(5));
	return 0;
}

long multiF(int value) {  // 함수 정의
	int multi = 1;
	for (int i = 1; i <= value; i++) {
		multi = multi * i;  // multi 함수에 곱들의 연산을 쌓아감
	}
	return multi;  // 곱들의 연산을 반환함 
}