#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	FILE* fp;
	char c, count = 0;

	if ((fp = fopen("sample.txt", "r")) == NULL) {
		printf("안열림1\n");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF) {
		if (isprint(c))
			count++;
	}
	printf("문자의 개수는 %d", count);
	
	fclose(fp);
	return 0;
}
