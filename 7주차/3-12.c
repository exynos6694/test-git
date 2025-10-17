#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 3

int main(void)
{
	int matrix[][ROWSIZE][COLSIZE] = 
	{
	  { { 46, 79, 78 },
		{ 35, 57, 28 },
		{ 43, 68, 76 },
		{ 56, 78, 98 } },
	  { { 78, 35, 99 },
		{ 85, 82, 34 },
		{ 58, 59, 29 },
		{ 34, 59, 35 } }
	};

	printf("\n위의 두 행렬 합의 결과값입니다.\n");
	printf("----------------\n");
	for (int i = 0; i < ROWSIZE; i++) {
		for (int j = 0; j < COLSIZE; j++) {
			printf("|%4d", matrix[0][i][j]+matrix[1][i][j]);
		}
		printf("|\n");
	}
	printf("----------------\n");

	printf("\n위의 두 행렬 차의 결과값입니다.\n");
	printf("----------------\n");
	for (int i = 0; i < ROWSIZE; i++) {
		for (int j = 0; j < COLSIZE; j++) {
			printf("|%4d", matrix[0][i][j] - matrix[1][i][j]);
		}
		printf("|\n");
	}
	printf("----------------\n");

	return 0;
}