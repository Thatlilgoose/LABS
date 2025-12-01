#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int res[20], summ = 0, x[4][5];
	double summ_str = 0.0;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		res[i] = rand();
		if (i % 2 != 0) {
			summ += res[i];
		}
		else {
			summ -= res[i];
		}
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++) {
			x[i][j] = rand();
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i <= 4; i++) {
		if (i > 0) {
			printf("%.1lf\n", summ_str / 5.0);
		}
		if (i == 4) {
			break;
		}
		summ_str = 0;
		for (int j = 0; j < 5; j++) {
			summ_str += x[i][j];
		}
	}
	//printf("%d", summ);
	return 0;
}
