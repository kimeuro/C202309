#include <stdio.h>

int main(void) {
	char name[128];  //������ ����
	int age;
	double weight;
	float height;
	char what[512];
	printf("�̸��� ������? ");  //����Ʈ�� ���� ��ĵ�� ���ϱ�� �ݺ�
	scanf_s("%s", name, sizeof(name));
	printf("�� ���̿���? ");
	scanf_s("%d", &age);
	printf("�����Դ� �� kg�̿���? ");
	scanf_s("%lf", &weight);
	printf("Ű�� �� cm����? ");
	scanf_s("%f", &height);
	printf("� ���˸� ��������� ?");
	scanf_s("%s", what, sizeof(what));

	printf("\n-----������ ����-----\n");  //���������� ���� ���
	printf("�̸�   : %s\n", name);
	printf("����   : %d\n", age);
	printf("������ : %.2lf\n", weight);
	printf("Ű    : %.2f\n", height);
	printf("���˸� : %s\n", what);
	return 0;
}