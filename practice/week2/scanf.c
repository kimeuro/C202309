#include <stdio.h>

//int main(void) {
//	int input;
//	printf("값을 입력하세요 : ");
//	scanf_s("%d", &input);
//	printf("입력값 : %d", input);
//	return 0;
//}

int main(void) {
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	return 0;
}