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
	return 0;
}