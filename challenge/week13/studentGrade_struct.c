#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {  //구조체 선언
	char* name;
	int age;
	int score;
};

void classifyStudents(int num, struct student* STUDENTS, char targetGrade) {  //학생 분류 함수를 선언과 정의
	printf("학생 성적 분류:\n");
	char grade = ' ';  //문자형 변수 grade 선언 
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
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int sumScores(int num, struct student* STUDENTS) {
	int sumScores = 0;  //총합을 저장할 정수형 변수 선언
	for (int i = 0; i < num; i++) {
		sumScores += STUDENTS[i].score;  //for문으로 배열의 모든 값을 변수에 쌓아감
	}
	return sumScores;  //쌓은 값을 반환함
}

double averageScores(int num, struct student* STUDENTS) {
	double sumScores = 0;  //총합을 저장할 실수형 변수 선언
	for (int i = 0; i < num; i++) {
		sumScores += STUDENTS[i].score;  //for문으로 배열의 모든 값을 변수에 쌓아감
	}
	double averageScores = sumScores / num;  //쌓은 값을 학생 수로 나누어 평균을 구하고, 이를 변수에 선언과 동시에 대입함
	return averageScores;  //평균 값을 반환함
}

void printRanks(int num, struct student* STUDENTS) {
	for (int i = 0; i < num; i++) {  //학생을 대표하는 번호를 나타내는 바깥 for문 작성
		int j = num;  //순위를 나타낼 변수 선언과 값 대입
		for (int k = 0; k < num; k++) {  //이중 for문으로 비교할 학생과 다른 학생들을 전부 비교함
			if (STUDENTS[i].score > STUDENTS[k].score) {
				j--;  //순위는 낮을수록 점수가 높은 것이므로 다른 학생들과 비교하며 전체 학생 수에서 하나씩 깎아나감
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i, j);  //학생번호와 그 순위를 바깥 for문에서 출력하고, 다음 번호의 학생을 비교함
	}
}



int main() {
	int num;
	printf("학생 수를 입력하세요: ");
	scanf_s("%d", &num);

	struct student* STUDENTS = (struct student*)malloc(num * sizeof(struct student));
	if (STUDENTS == NULL) {
		return 1;
	}

	for (int i = 0; i < num; i++) {  // 구조체에 값 전달
		printf("학생 %d의 이름을 입력하세요: ", i + 1);
		STUDENTS[i].name = (char*)malloc(num * sizeof(char));
		scanf_s("%s", STUDENTS[i].name, sizeof(STUDENTS[i].name));

		printf("학생 %d의 나이를 입력하세요: ", i + 1);
		scanf_s("%d", &STUDENTS[i].age);

		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &STUDENTS[i].score);
	}

	char ch = getchar();  // 버퍼 임시 저장 변수, 엔터를 지우기 위해

	char target;  //특정 점수를 맞은 학생을 찾기 위한 변수 선언
	printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);
	
	classifyStudents(num, STUDENTS, target);
	int sum = sumScores(num, STUDENTS);  //총합을 나타내는 함수의 값을 변수에 대입함
	double average = averageScores(num, STUDENTS);  //평균을 나타내는 함수의 값을 변수에 대입함
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);  //위 두 수를 출력함
	printRanks(num, STUDENTS);  //순위를 나타내는 함수를 호출함
	//매개변수에 구조체 포인터 변수 삽입

	for (int i = 0; i < num; i++) {
		free(STUDENTS[i].name);
		free(STUDENTS[i].age);
		free(STUDENTS[i].score);  //??
	}
	free(STUDENTS);
	return 0;
}