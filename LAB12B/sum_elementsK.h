#include <stdio.h>
int summ_elementsK(int (*p)[COLS]) {
	int summ = 0;
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 8; j++) {
			summ += (i + j == K) ? p[i - 1][j - 1] : 0;
		}
	}
	printf("%d", summ);
	return 0;
}