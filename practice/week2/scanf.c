#include <stdio.h>

//int main(void) {
//	int input;
//	printf("���� �Է��ϼ��� : ");
//	scanf_s("%d", &input);
//	printf("�Է°� : %d", input);
//	return 0;
//}

int main(void) {
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	return 0;
}