#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
	int sum;
	double avg;
};
void menu();
void add(struct student list[]);  //추가
void print(struct student list[]);  //출력
void search(struct student list[]);  //검색

int main() {
	struct student list[3] = { 0 };
	int ans;
	while (1) {
		menu();
		printf("정수값을 입력하시오: ");
		scanf_s("%d", &ans);
		printf("\n");
		switch (ans) {
		case 1:
			add(list);
			break;
		case 2:
			print(list);
			break;
		case 3:
			search(list);
			break;
		case 4:
			exit();
		}
	}

	return 0;
}
void menu() {
	printf("\n======================\n");
	printf(" 1. 추가\n 2. 출력\n 3. 검색\n 4. 종료\n");
	printf("======================\n");
}
void add(struct student list[]) {  //추가
	int ans, y1, y2;
	while (1) {
		printf("추가할 사람의 순서를 입력하시오(0~2): ");
		scanf_s("%d", &ans);
		if (list[ans].number != 0) {
			printf("이미 추가되어 있습니다. 수정하시겠습니까?(0 or 1): ");
			scanf_s("%d", &y1);
			if (y1 == 0)
				break;
		}
		printf("학번: ");
		scanf_s("%d", &list[ans].number);
		printf("이름: ");
		scanf("%s", list[ans].name);
		printf("국어: ");
		scanf_s("%d", &list[ans].kor);
		printf("영어: ");
		scanf_s("%d", &list[ans].eng);
		printf("수학: ");
		scanf_s("%d", &list[ans].mat); 
		printf("더 입력하시겠습니까?(0 or 1): ");
		scanf_s("%d", &y2);
		if (y2 == 0)
			break;
	}
}
void print(struct student list[]) {  //출력
	for (int i = 0; i < 3; i++) {
		if (list[i].number == 0)
			continue;
		list[i].sum = list[i].kor + list[i].eng + list[i].mat;
		list[i].avg = list[i].sum / 3.0;
		printf("학번: %d  이름: %s  총점: %d  평균: %lf\n", list[i].number, list[i].name, list[i].sum, list[i].avg);
	}
}
void search(struct student list[]) {  //검색
	int ans, num;
	char name[10];
	printf("1. 학번 2. 이름   :");
	scanf_s("%d", &ans);
	switch (ans) {
	case 1:
		printf("학번을 입력하시오: ");
		scanf_s("%d", &num);
		for (int i = 0; i < 3; i++) {
			if(list[i].number==num)
				printf("학번: %d  이름: %s  총점: %d  평균: %lf\n", list[i].number, list[i].name, list[i].sum, list[i].avg);
		}
		break;
	case 2:
		printf("이름을 입력하시오: ");
		scanf("%s", name);
		for (int i = 0; i < 3; i++) {
			if (strcmp(list[i].name,name)==0)
				printf("학번: %d  이름: %s  총점: %d  평균: %lf\n", list[i].number, list[i].name, list[i].sum, list[i].avg);
		}
		break;
	}
}
