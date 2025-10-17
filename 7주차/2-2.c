








#include <stdio.h>
int main(void)
{
	double arr[] = { -5.34,3.67,19.76,28.76,35.63 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("배열 원소 값을 출력\n");
	for (int i = 0; i < size; i++)
		printf("%.2lf ", arr[i]);
	puts("");

	return 0;
}