




#include <stdio.h>

int main(void)
{
	int i = 0, arr[5] = { 0 };

	printf("%d 개의 정수 입력 >> ", (sizeof(arr) / sizeof(arr[0]))-1);
	while (i < 4) {
		scanf("%d", &arr[i]);
		arr[4] += arr[i];
		i++;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	puts("");

	return 0;
}