#include <stdio.h>

int main(void) {
	int num = 0;  // ���� ���� �� �ʱ�ȭ
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);  // ������ ���� �����ؼ� ����
	if (num == 0) {  // ������ �ִ� ���� ���Ͽ� �˸��� ���� �����
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