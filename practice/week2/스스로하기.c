#include <stdio.h>

int main(void) {
	char name[128];  //변수들 선언
	int age;
	double weight;
	float height;
	char what[512];
	printf("이름이 뭐에요? ");  //프린트로 묻고 스캔에 답하기로 반복
	scanf_s("%s", name, sizeof(name));
	printf("몇 살이에요? ");
	scanf_s("%d", &age);
	printf("몸무게는 몇 kg이에요? ");
	scanf_s("%lf", &weight);
	printf("키는 몇 cm예요? ");
	scanf_s("%f", &height);
	printf("어떤 범죄를 저질렀어요 ?");
	scanf_s("%s", what, sizeof(what));

	printf("\n-----범죄자 정보-----\n");  //마지막으로 정보 출력
	printf("이름   : %s\n", name);
	printf("나이   : %d\n", age);
	printf("몸무게 : %.2lf\n", weight);
	printf("키    : %.2f\n", height);
	printf("범죄명 : %s\n", what);
	return 0;
}