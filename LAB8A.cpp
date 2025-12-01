#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int completion(int* p) {
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		*(p + i) = rand();
	}
	return 0;
}

int alternating_sum(int* p) {
	int summ = 0;
	for (int i = 0; i < 20; i++) {
		if (i % 2 != 0) {
			summ += *(p + i);
		}
		else {
			summ -= *(p + i);
		}
	}
	printf("%d", summ);
	return 0;
}



int main() {
	int res[20];
	int* p = res;
	completion(p);
	alternating_sum(p);
	return 0;
}
