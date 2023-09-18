#include <stdio.h>

int main(void) {
	int i = 0;  //i 초기화
	while (i < 10) {  
		if (i % 2 == 0) {
			i++;  //i가 만약 2라면 컨티뉴를 해도 계속 i는 2이기에 if문에 걸려 무한반복에 걸림. 따라서 i의 값을 증가시킴으로서 이를 해결함

			continue;
		}
		printf("%d Hello World!\n", i++);
	}
	return 0;
}