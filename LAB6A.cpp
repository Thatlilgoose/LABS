#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int res[20], summ = 0;
	int* p = res;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		*(p+i) = rand();
		if (i % 2 != 0) {
			summ += *(p+i);
		}
		else {
			summ -= *(p+i);
		}
	}
	printf("%d", summ);
	return 0;
}
