#include <stdio.h>
#define X 1  //������� X�� PI ���� �� �ʱ�ȭ
#define PI 3.141592

int main(void) {
	double z;  //double�̶�� �Ǽ������� z��� ���� ����
	z = X + PI; //z�� �Ʊ� ������ ����� �� ���� ���� �� ����
	printf("%lf", z);  //���������ڸ� �̿��Ͽ� z�� ���
	return 0;  //���ϰ� ��ȯ���� ���� �˸�
}