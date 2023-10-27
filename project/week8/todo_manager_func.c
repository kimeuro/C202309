#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일의 수를 저장하기 위한 변수
//전역변수로 선언함으로써 코드의 모든 곳에서 사용가능

void addTask(char task[]);  //함수 선언
void delTask(int delIndex, int taskCount);
void printTask(int taskCount);

int main() {
	printf("TODO 리스트 시작! \n");

	while (1) {  //while 반복문에 1의 값을 넣어 계속 반복되도록 함.
		int choice = -1; // 사용자가 원하는 입력 번호를 저장하기 위한 변수

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 메뉴에서 함수 종료를 위한 변수 
		int delIndex = -1;  // 할 일 삭제를 위한 변수
		int changeIndex = -1; // 할 일 수정을 위한 변수
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수

		// 사용자의 입력에 따른 기능을 수행하고자 switch문 사용
		switch (choice) {
		case 1:
			// 할 일 추가 블록
			addTask(tasks[taskCount]);
			taskCount++;  //할 일의 수를 1 증가시킴
			break;
		case 2:
			// 할 일 삭제 블록
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				delTask(delIndex, taskCount);
				taskCount -= 1;  //할 일의 삭제에 따른 할 일의 수 1 감소
			}
			break;
		case 3:
			// 할 일 출력 블록
			printf("할 일 목록\n");
			printTask(taskCount);
			break;
		case 4:
			// TODO 종료 블록
			terminate = 1;
			break;
		case 5:
			// 할 일 수정 블록
			printf("수정할 일의 번호를 입력해주세요. :");
			scanf_s("%d", &changeIndex);
			ch = getchar();
			printf("새로운 할 일을 입력해주세요. :");
			scanf_s("%s", &tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));  // 입력받은 값에 1을 빼서 배열과 맞추어 할 일을 수정함
			printf("%d번의 할 일을 %s로 수정합니다.\n", changeIndex, tasks[changeIndex - 1]);
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {  //case 4일 때 terminate == 1 이 되므로 프로그램이 종료됌
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
		else if (taskCount >= 10) {  // 할 일이 10개를 넘어갈 때 프로그램이 종료됌
			printf("할 일이 10개로 다 찼기에 프로그램을 종료합니다.\n");
			break;
		}

		// TODO: 할 일이 다 찼는지 체크하는 코드 작성

	}
}

void addTask(char task[]) {
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s", task, (int)sizeof(task));
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);  //task 매개변수에 저장된 문자열을 tasks의 taskCount 인덱스로 복사함
	printf("할 일 ""%s""가 저장되었습니다\n\n", task);
}

void delTask(int delIndex, int taskCount) {

	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);  //tasks[i]에 있던 문자열을 한칸 앞으로 옮김
	}
}

void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {  //for 문을 통해 모든 목록을 반복하여 출력함
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}