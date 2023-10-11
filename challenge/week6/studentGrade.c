#include <stdio.h>
#define STUDENTS 5  //상수 선언

void classifyStudents(int scores[], char targetGrade) {  //학생 분류 함수를 선언과 정의
	printf("학생 성적 분류:\n");
	char grade = ' ';  //문자형 변수 grade 선언 
	for (int i = 0; i < STUDENTS; i++) {  //for문과 if문으로 학생들의 성적을 분류함
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
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[]) {
	int sumScores = 0;  //총합을 저장할 정수형 변수 선언
	for (int i = 0; i < STUDENTS; i++) {
		sumScores += scores[i];  //for문으로 배열의 모든 값을 변수에 쌓아감
	}
	return sumScores;  //쌓은 값을 반환함
}

double averageScores(int scores[]) {
	double sumScores = 0;  //총합을 저장할 실수형 변수 선언
	for (int i = 0; i < STUDENTS; i++) {
		sumScores += scores[i];  //for문으로 배열의 모든 값을 변수에 쌓아감
	}
	double averageScores = sumScores / STUDENTS;  //쌓은 값을 학생 수로 나누어 평균을 구하고, 이를 변수에 선언과 동시에 대입함
	return averageScores;  //평균 값을 반환함
}

void printRanks(int scores[]) {
	for (int i = 0; i < STUDENTS; i++) {  //학생을 대표하는 번호를 나타내는 바깥 for문 작성
		int j = STUDENTS;  //순위를 나타낼 변수 선언과 값 대입
		for (int k = 0; k < STUDENTS; k++) {  //이중 for문으로 비교할 학생과 다른 학생들을 전부 비교함
			if (scores[i] > scores[k]) {
				j--;  //순위는 낮을수록 점수가 높은 것이므로 다른 학생들과 비교하며 전체 학생 수에서 하나씩 깎아나감
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i, j);  //학생번호와 그 순위를 바깥 for문에서 출력하고, 다음 번호의 학생을 비교함
	}
}



int main() {
	int scores[STUDENTS];  //점수를 넣을 배열 선언

	for (int i = 0; i < STUDENTS; i++) {  //배열에 성적들을 넣어줌
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();  // 버퍼 임시 저장 변수, 엔터를 지우기 위해

	char target;  //특정 점수를 맞은 학생을 찾기 위한 변수 선언
	printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);  //총합을 나타내는 함수의 값을 변수에 대입함
	double average = averageScores(scores);  //평균을 나타내는 함수의 값을 변수에 대입함
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);  //위 두 수를 출력함
	printRanks(scores);  //순위를 나타내는 함수를 호출함
	return 0;
}