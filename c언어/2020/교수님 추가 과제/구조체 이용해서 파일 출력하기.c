#include <stdio.h>

struct student {
	int num;
	char name[10];
	int kor;
	int eng;
	int mat;
	int sum;
	double avg;
};

int main() {
	FILE* fp = NULL;
	struct student list[3];

	fp = fopen("student.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	for (int i = 0; i < 3; i++) {
		printf("학번: ");
		scanf_s("%d", &list[i].num);
		printf("이름: ");
		scanf("%s", list[i].name);
		printf("국어: ");
		scanf_s("%d", &list[i].kor);
		printf("영어: ");
		scanf_s("%d", &list[i].eng);
		printf("수학: ");
		scanf_s("%d", &list[i].mat);
		list[i].sum = list[i].kor + list[i].eng + list[i].mat;
		list[i].avg = list[i].sum / 3.0;
	}
	fputs("학번\t이름\t국어\t영어\t수학\t총점\t평균\n", fp);
	for (int i = 0; i < 3; i++) {
		fprintf(fp, "%d\t", list[i].num);
		fputs(list[i].name, fp);
		fprintf(fp, "\t%d", list[i].kor);
		fprintf(fp, "\t%d", list[i].mat);
		fprintf(fp, "\t%d", list[i].eng);
		fprintf(fp, "\t%d", list[i].sum);
		fprintf(fp, "\t%lf\n", list[i].avg);
	}

	fclose(fp);

	return 0;
}
