#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main() {
	int n, i = 1;
	double s = 0;
	scanf("%d", &n);
	while (s <= n) {
		s += 1.0 / (double)i;
		i++;
	}
	printf("%lf", s);
	return 0;
}

