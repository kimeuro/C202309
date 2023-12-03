#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {  //����ü ����
	char* name;
	int age;
	int score;
};

void classifyStudents(int num, struct student* STUDENTS, char targetGrade) {  //�л� �з� �Լ��� ����� ����
	printf("�л� ���� �з�:\n");
	char grade = ' ';  //������ ���� grade ���� 
	for (int i = 0; i < num; i++) {
		int scores = STUDENTS[i].score;
		if (scores >= 90) {
			grade = 'A';
		}
		else if (scores >= 80) {
			grade = 'B';
		}
		else if (scores >= 70) {
			grade = 'C';
		}
		else if (scores >= 60) {
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

int sumScores(int num, struct student* STUDENTS) {
	int sumScores = 0;  //������ ������ ������ ���� ����
	for (int i = 0; i < num; i++) {
		sumScores += STUDENTS[i].score;  //for������ �迭�� ��� ���� ������ �׾ư�
	}
	return sumScores;  //���� ���� ��ȯ��
}

double averageScores(int num, struct student* STUDENTS) {
	double sumScores = 0;  //������ ������ �Ǽ��� ���� ����
	for (int i = 0; i < num; i++) {
		sumScores += STUDENTS[i].score;  //for������ �迭�� ��� ���� ������ �׾ư�
	}
	double averageScores = sumScores / num;  //���� ���� �л� ���� ������ ����� ���ϰ�, �̸� ������ ����� ���ÿ� ������
	return averageScores;  //��� ���� ��ȯ��
}

void printRanks(int num, struct student* STUDENTS) {
	for (int i = 0; i < num; i++) {  //�л��� ��ǥ�ϴ� ��ȣ�� ��Ÿ���� �ٱ� for�� �ۼ�
		int j = num;  //������ ��Ÿ�� ���� ����� �� ����
		for (int k = 0; k < num; k++) {  //���� for������ ���� �л��� �ٸ� �л����� ���� ����
			if (STUDENTS[i].score > STUDENTS[k].score) {
				j--;  //������ �������� ������ ���� ���̹Ƿ� �ٸ� �л���� ���ϸ� ��ü �л� ������ �ϳ��� ��Ƴ���
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i, j);  //�л���ȣ�� �� ������ �ٱ� for������ ����ϰ�, ���� ��ȣ�� �л��� ����
	}
}



int main() {
	int num;
	printf("�л� ���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	struct student* STUDENTS = (struct student*)malloc(num * sizeof(struct student));
	if (STUDENTS == NULL) {
		return 1;
	}

	for (int i = 0; i < num; i++) {  // ����ü�� �� ����
		printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
		STUDENTS[i].name = (char*)malloc(num * sizeof(char));
		scanf_s("%s", STUDENTS[i].name, sizeof(STUDENTS[i].name));

		printf("�л� %d�� ���̸� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &STUDENTS[i].age);

		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &STUDENTS[i].score);
	}

	char ch = getchar();  // ���� �ӽ� ���� ����, ���͸� ����� ����

	char target;  //Ư�� ������ ���� �л��� ã�� ���� ���� ����
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);
	
	classifyStudents(num, STUDENTS, target);
	int sum = sumScores(num, STUDENTS);  //������ ��Ÿ���� �Լ��� ���� ������ ������
	double average = averageScores(num, STUDENTS);  //����� ��Ÿ���� �Լ��� ���� ������ ������
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);  //�� �� ���� �����
	printRanks(num, STUDENTS);  //������ ��Ÿ���� �Լ��� ȣ����
	//�Ű������� ����ü ������ ���� ����

	for (int i = 0; i < num; i++) {
		free(STUDENTS[i].name);
		free(STUDENTS[i].age);
		free(STUDENTS[i].score);  //??
	}
	free(STUDENTS);
	return 0;
}