#include <stdio.h>

int main(void) {
	int floor;  //몇 층을 쌓을지 정하는 변수 선언
	printf("몇 층을 쌓겠습니까?");  //프린트문으로 묻고 스캔문으로 변수에 값을 넣음
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {  //첫 번쨰 for문으로 전체적인 피라미드의 높이를 구현
		for (int j = 0; j < floor - 1 - i; j++) {  //이중 for문으로 피라미드에 들어갈 공백과 별을 구현
			printf("S");
		}
		for (int k = 0; k < 2*i + 1; k++) {  //1, 3, 5... 와 같이 홀수의 값만 나오도록 for문을 작성
			printf("*");
		}
		printf("\n");  //피라미드 층을 구현한 다음에 다음 층수를 구현하기 위해서 넘어가게 함
	}	
	return 0;
}