#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    SetConsoleCP(1251);       // установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    char symb, name[50];      // ќбъ€вление переменных типа char
    int a, b, len_s;          // ќбъ€вление переменных типа int
    float c, d;               // ќбъ€вление переменных типа float
    unsigned int e = 0;       // ќб€вление беззнаковой переменной типа int

    printf("¬ведите символ:");
    scanf(" %c", &symb);    // —читываем символ с клавиатуры и записываем его в переменную symb
    fgets(name, 50, stdin); // —читываем слова с клавиатуры и записываем их в массивы name и surname через разделитель в виде любого пробольного символа
    len_s = strlen(name);   // Ќаходим длину строки
    printf("¬ведите своЄ им€ и фамилию:");
    fgets(name, 50, stdin);
    printf("¬ведите целое положительное и целое отрицательное:");
    scanf("%d %d", &a, &b); // ¬водим целые числа и записываем из в переменные a и b через разделитель в виде любого пробельного символа
    printf("¬ведите вещественное положительное и вещественное отрицательное числа:");
    scanf("%f %f", &c, &d); // ¬водим вещественные числа и записываем из в переменные с и d через разделитель в виде любого пробельного символа
    printf("¬ведите число без знака:");
    scanf("%u", &e);

    printf("symb = %c code = %d\n", symb, (int)symb);
    printf("ћен€ зовут %s\n", name);
    printf("len_s = %d", len_s);
    printf("digit = [% -10d] digit_min = [% d] digit_left = [% 10d]\n", a, a, a);
    printf("digit16 = [%-10x] digit16_min = [%x] digit16_left = [%-10x]\n", a, a, a);
    printf("ndigit = [%-10d] ndigit_min = [%d] ndigit_left = [%10d]\n", b, b, b);
    printf("ndigit16 = [% -10x] ndigit16_min = [% x] ndigit16_left = [% -10x]\n", b, b, b);
    printf("float = %.3f ex = %e\n", c, c);
    printf("nfloat = % .3f nex = % .3e\n", d, d);
    printf("unsigned_digit = %u unsigned_digit_oct = %o unsigned_digit_hex = %x", e, e, e);
    _getch();
    return 0;
}