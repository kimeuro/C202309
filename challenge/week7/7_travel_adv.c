#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();  //함수들을 선언
int getSum(int numArray[], int length);
double getAverage(int numArray[], int length);
void printFamousCity(double dayArray[], int length);

int main() {

	// 사용자로부터 도시 이름 입력받기
	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays();

	return 0;
}
//main 함수 아래에 함수들을 정의함
int getSum(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {  //for문을 통해 변수에 총 일수를 쌓아감
		totalDays += numArray[i];
	}
	return totalDays;
}

double getAverage(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	double averageDays = (double)totalDays / length;  //int형을 double형으로 바꾸어 계산함
	return averageDays;
}

void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {  //if문으로 인기있는 도시들을 비교함
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}
	printf("평균일 기준으로 가장 인기있었던 도시는 %s 입니다. (평균머문일: %.2f)\n", cities[maxDayIndex], maxDay);
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);  //총 일수를 표현하는 함수를 호출
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);  //평균 일 수를 표현하는 함수를 호출
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDay, averageDay);
	}
	printFamousCity(averageDays, NUMCITY);
}
