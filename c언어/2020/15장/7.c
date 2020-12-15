#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp;
	char file[100];
	char buffer[100];

	printf("파일 이름을 입력하시오: ");
	gets_s(file, 100);

	if ((fp = fopen(file, "w")) == NULL) {
		printf("안열림1\n");
		exit(1);
	}
	while (fgets(buffer, 100, stdin) != 0) {
		fputs(buffer, fp);
	}

	fclose(fp);
	return 0;
}
