#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y;
	double a, b, c;
	printf("Введите x:");
	scanf("%lf", &x);
	a = 2 * x;
	b = sin(fabs(3 * x));
	c = (a + b) / 3.56;
	y = sqrt(c);
	printf("Получившийся y: %lf", y);
	_getch();
	return 0;
}