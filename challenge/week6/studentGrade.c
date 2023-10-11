#include <stdio.h>
#define STUDENTS 5  //��� ����

void classifyStudents(int scores[], char targetGrade) {  //�л� �з� �Լ��� ����� ����
	printf("�л� ���� �з�:\n");
	char grade = ' ';  //������ ���� grade ���� 
	for (int i = 0; i < STUDENTS; i++) {  //for���� if������ �л����� ������ �з���
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[]) {
	int sumScores = 0;  //������ ������ ������ ���� ����
	for (int i = 0; i < STUDENTS; i++) {
		sumScores += scores[i];  //for������ �迭�� ��� ���� ������ �׾ư�
	}
	return sumScores;  //���� ���� ��ȯ��
}

double averageScores(int scores[]) {
	double sumScores = 0;  //������ ������ �Ǽ��� ���� ����
	for (int i = 0; i < STUDENTS; i++) {
		sumScores += scores[i];  //for������ �迭�� ��� ���� ������ �׾ư�
	}
	double averageScores = sumScores / STUDENTS;  //���� ���� �л� ���� ������ ����� ���ϰ�, �̸� ������ ����� ���ÿ� ������
	return averageScores;  //��� ���� ��ȯ��
}

void printRanks(int scores[]) {
	for (int i = 0; i < STUDENTS; i++) {  //�л��� ��ǥ�ϴ� ��ȣ�� ��Ÿ���� �ٱ� for�� �ۼ�
		int j = STUDENTS;  //������ ��Ÿ�� ���� ����� �� ����
		for (int k = 0; k < STUDENTS; k++) {  //���� for������ ���� �л��� �ٸ� �л����� ���� ����
			if (scores[i] > scores[k]) {
				j--;  //������ �������� ������ ���� ���̹Ƿ� �ٸ� �л���� ���ϸ� ��ü �л� ������ �ϳ��� ��Ƴ���
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i, j);  //�л���ȣ�� �� ������ �ٱ� for������ ����ϰ�, ���� ��ȣ�� �л��� ����
	}
}



int main() {
	int scores[STUDENTS];  //������ ���� �迭 ����

	for (int i = 0; i < STUDENTS; i++) {  //�迭�� �������� �־���
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();  // ���� �ӽ� ���� ����, ���͸� ����� ����

	char target;  //Ư�� ������ ���� �л��� ã�� ���� ���� ����
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);  //������ ��Ÿ���� �Լ��� ���� ������ ������
	double average = averageScores(scores);  //����� ��Ÿ���� �Լ��� ���� ������ ������
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);  //�� �� ���� �����
	printRanks(scores);  //������ ��Ÿ���� �Լ��� ȣ����
	return 0;
}