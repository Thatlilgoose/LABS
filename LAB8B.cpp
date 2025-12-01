#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define K 4
#define COLS 8
#define ROWS 6

int completion(int (*p)[COLS]) {
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			p[i][j] = rand();
		}
	}
	return 0;
}

int summ_elementsK(int (*p)[COLS]) {
	int summ = 0;
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 8; j++) {
			summ += (i + j == K) ? p[i - 1][j - 1] : 0;
		}
	}
	printf("%d\n", summ);
	return 0;
}
void sum_rows(int (*p)[COLS]) {
	int summ = 0, sum_rows[ROWS];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			summ += p[i][j];
		}
		sum_rows[i] = summ;
		summ = 0;
		printf("sum %dst row = %d\n", (i+1), sum_rows[i]);
	}
}

int main() {
	int X[ROWS][COLS];
	int (*p)[COLS] = X;;
	completion(p);
	summ_elementsK(p);
	sum_rows(p);
	return 0;
}