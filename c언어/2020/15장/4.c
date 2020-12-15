#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE* fp;
	char file[100];
	FILE* fp1;
	char file1[100];
	char buffer[100];
	char buffer1[100];

	printf("첫번째 파일 이름: ");
	gets_s(file, 100);
	printf("두번째 파일 이름: ");
	gets_s(file1, 100);

	if ((fp = fopen(file, "r")) == NULL) {
		printf("안열림1\n");
		exit(1);
	}
	if ((fp1 = fopen(file1, "r")) == NULL) {
		printf("안열림1\n");
		exit(1);
	}

	while (fgets(buffer,100,fp)!=NULL) {
		fgets(buffer1, 100, fp1);
		if (strcmp(buffer, buffer1) != 0) {
			printf("<< %s\n>> %s\n", buffer, buffer1);
			fclose(fp);
			fclose(fp1);
			return 0;
		}
	}
	
	
	fclose(fp);
	fclose(fp1);
	return 0;
}
