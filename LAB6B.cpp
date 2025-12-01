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
	int X[6][8], summ = 0;
	/*int (*p)[8] = X;*/
 	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			*(*(X + i) + j) = rand();
		}
	}
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 8; j++) {
			summ += *(*(X + (i-1)) + (j-1));
		}
	}
	double sr_arifm = (double)summ / 48.0;
	printf("%lf", sr_arifm);
	return 0;
}