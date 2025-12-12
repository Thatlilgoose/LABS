#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "completion.h"
#include "sum_elementsK.h"
#define K 4
#define COLS 8
#define ROWS 6

int main() {
	int X[ROWS][COLS];
	int (*p)[COLS] = X;
	completion(p);
	summ_elementsK(p);
	return 0;
}