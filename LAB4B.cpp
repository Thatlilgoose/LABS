#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define K 4

int main() {
	srand(time(NULL));
	int X[6][8], summ = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			X[i][j] = rand();
		}
	}
		for (int i = 1; i <= 6; i++) {
			for (int j = 1; j <= 8; j++) {
				summ += (i + j == K) ? X[i - 1][j - 1] : 0;
			}
		}

		printf("%d", summ);
		return 0;
}
	