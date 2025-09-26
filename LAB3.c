#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int min_degree = abs(a - b), value1 = a, value2 = b;
	
	if (abs(a - c) < min_degree) {
		min_degree = abs(a - c);
		value2 = c;
	}
	if (abs(a - d) < min_degree) {
		min_degree = abs(a - d);
		value2 = d;
	}
	if (abs(b - c) < min_degree) {
		min_degree = abs(b - c);
		value1 = b;
		value2 = c;
	}
	if (abs(b - d) < min_degree) {
		min_degree = abs(b - d);
		value1 = b;
		value2 = d;
	}
	if (abs(c - d) < min_degree) {
		min_degree = abs(c - d);
		value1 = c;
		value2 = d;
	}
	printf("%d %d %d", value1, value2, min_degree);
	_getch();
	return 0;
}