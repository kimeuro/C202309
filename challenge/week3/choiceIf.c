#include <stdio.h>

int main() {
	int choice;  //변수 공간 확보

	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);  //변수에 원하는 값 넣기

	if (choice == 1) {  //넣은 변수가 1,2,3 혹은 다른 값인지 확인하고 이에 맞는 값 출력
		printf("파일을 저장합니다.");
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");
	}
	else if (choice == 3) {
		printf("종료합니다.");
	}
	else {
		printf("잘못 입력하셨습니다.");
	}
	return 0;
}