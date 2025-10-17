





#include <stdio.h>

int main(void)
{
	int data[] = { 3,21,35,57,24,82,8 };
	int size = sizeof(data) / sizeof(data[0]);
	printf("배열 원소 값을 출력\n");

	for (int i = 0; i < size; i++) {
		data[i] += 10;
		printf("%d, ", data[i]);
	}
	puts("");

	return 0;
}