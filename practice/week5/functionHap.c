#include <stdio.h>

int hapf(int value);  // hapf ��� �Լ� ����

int main(void) {
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
	return 0;
}

int hapf(int value) {  // hapf �Լ� ����
	int i = 1;  // ����� �ʱ�ȭ
	int hap = 0;

	while (i <= value) {
		hap = hap + i;  // 1���� value �������� ���� hap ������ �׾ư�
		i++;
	}
	return hap;  // hapf �Լ��� ��ȯ���� hap���� �����
}
