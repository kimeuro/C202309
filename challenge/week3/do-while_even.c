#include <stdio.h>

int main(void) {
	int i = 0;  //i �ʱ�ȭ
	do {
		if (i % 2 == 0) {
			i++;  //i�� ���� 2��� ��Ƽ���� �ص� ��� i�� 2�̱⿡ if���� �ɷ� ���ѹݺ��� �ɸ�. ���� i�� ���� ������Ŵ���μ� �̸� �ذ���
			continue;
		}
		printf("%d Hello World!\n", i++);
	} while (i < 10);
	return 0;
}