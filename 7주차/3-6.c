





#include <stdio.h>

int main(void)
{
	double arr[] = { 98.56,78.62,78.69,89.32,95.29 }, sum = 0;
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		printf("%.2lf ", arr[i]);
		sum += arr[i];
	}
	printf("\n배열의 합은 %.3lf이며 평균은 %.3lf입니다.\n", sum, sum / size);

	return 0;
}