#include <stdio.h>
#define SIZE 100

typedef struct employee {
	int num;
	char name[SIZE];
	char phone[SIZE];
	int age;
}MEMBER;

int main() {
	MEMBER member[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		printf("사번: ");
		scanf_s("%d", &member[i].num);
		printf("이름: ");
		gets_s(member[i].name, SIZE);
		getchar();
		printf("전화번호: ");
		gets_s(member[i].phone, SIZE);
		getchar();
		printf("나이: ");
		scanf_s("%d", &member[i].age);
	}
	for (int i = 0; i < 10; i++) {
		if (20 <= member[i].age && member[i].age <= 30)
			printf("이름=%s%d 나이=%d\n", member[i].name, member[i].num, member[i].age);
	}

	return 0;
}
