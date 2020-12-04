#include <stdio.h>
#define ARRAY_INT(array,size,value){int i;\
									for(i=0; i<size; i++){array[i]=value;}}
void print(int array[],int size);
int main() {
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	print(array,10);
	ARRAY_INT(array, 10, 0);
	print(array,10);
	return 0;
}

void print(int array[],int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
