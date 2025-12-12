#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "completion.h"
#include "alternating_sum.h"

int main()
{
	int res[20];
	int *p = res;
	completion(p);
	alternating_sum(p);
	return 0;
}
