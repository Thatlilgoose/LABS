#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    SetConsoleCP(1251);       // ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
    char symb, name[50];      // ���������� ���������� ���� char
    int a, b, len_s;          // ���������� ���������� ���� int
    float c, d;               // ���������� ���������� ���� float
    unsigned int e = 0;       // ��������� ����������� ���������� ���� int

    printf("������� ������:");
    scanf(" %c", &symb);    // ��������� ������ � ���������� � ���������� ��� � ���������� symb
    fgets(name, 50, stdin); // ��������� ����� � ���������� � ���������� �� � ������� name � surname ����� ����������� � ���� ������ ����������� �������
    len_s = strlen(name);   // ������� ����� ������
    printf("������� ��� ��� � �������:");
    fgets(name, 50, stdin);
    printf("������� ����� ������������� � ����� �������������:");
    scanf("%d %d", &a, &b); // ������ ����� ����� � ���������� �� � ���������� a � b ����� ����������� � ���� ������ ����������� �������
    printf("������� ������������ ������������� � ������������ ������������� �����:");
    scanf("%f %f", &c, &d); // ������ ������������ ����� � ���������� �� � ���������� � � d ����� ����������� � ���� ������ ����������� �������
    printf("������� ����� ��� �����:");
    scanf("%u", &e);

    printf("symb = %c code = %d\n", symb, (int)symb);
    printf("���� ����� %s\n", name);
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