





#include <stdio.h>

int main(void) {
	int score[][4] = {
		{ 97, 90, 88, 95 },
		{ 76, 89, 75, 83 },
		{ 60, 70, 88, 82 },
		{ 75, 73, 72, 78 } };
	int sum_score = 0;

	printf("%9s%8s%6s%6s%6s\n", "이름", "중간", "중간", "기말", "기말");
	printf("==================================================\n");
	for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		switch (i) {
		case 0: printf("%10s", "이현수"); break;
		case 1: printf("%10s", "김기수"); break;
		case 2: printf("%10s", "김범용"); break;
		case 3: printf("%10s", "장기태"); break;
		case 4: printf("%10s", "이명수"); break;
		}

		for (int j = 0, sum = 0; j < sizeof(score[0]) / sizeof(score[0][0]); j++) {
			sum += score[i][j];
			sum_score = sum;
			printf("%6d", score[i][j]);
		}
		printf("%6d %8.2lf\n", sum_score, sum_score / 4.0);
	}

	return 0;
}