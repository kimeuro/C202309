#include <stdio.h>

int main(void) {
	int i = 0;  //i �ʱ�ȭ
	while (i < 10) {  
		if (i % 2 == 0) {
			i++;  //i�� ���� 2��� ��Ƽ���� �ص� ��� i�� 2�̱⿡ if���� �ɷ� ���ѹݺ��� �ɸ�. ���� i�� ���� ������Ŵ���μ� �̸� �ذ���

			continue;
		}
		printf("%d Hello World!\n", i++);
	}
	return 0;
}