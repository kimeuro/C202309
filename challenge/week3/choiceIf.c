#include <stdio.h>

int main() {
	int choice;  //���� ���� Ȯ��

	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice);  //������ ���ϴ� �� �ֱ�

	if (choice == 1) {  //���� ������ 1,2,3 Ȥ�� �ٸ� ������ Ȯ���ϰ� �̿� �´� �� ���
		printf("������ �����մϴ�.");
	}
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.");
	}
	else if (choice == 3) {
		printf("�����մϴ�.");
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	return 0;
}