#include <stdio.h>

long multiF(int value);  // �Լ� ����

void main(void) {
	printf("1���� 2������ ���� %d\n", multiF(2));
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));
}

long multiF(int value) {  // �Լ� ����
	int multi = 1;
	for (int i = 1; i <= value; i++) {
		multi = multi * i;  // multi �Լ��� ������ ������ �׾ư�
	}
	return multi;  // ������ ������ ��ȯ�� 
}