#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	FILE* fp1;
	char file1[100];
	FILE* fp2;
	char file2[100];
	int c1, c2;
	printf("첫번째 파일 이름: ");
	gets_s(file1, 100);
	printf("두번째 파일 이름: ");
	gets_s(file2, 100);
	if ((fp1 = fopen(file1, "r")) == NULL) {
		printf("안열림1\n");
		exit(1);
	}
	if ((fp2 = fopen(file2, "w")) == NULL) {
		printf("안열림2\n");
		exit(1);
	}
	while ((c1 = fgetc(fp1)) != EOF) {
		c2 = toupper(c1);
		printf("%c", c2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
