#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define K 4
#define COLS 8
#define ROWS 6

int completion(int (*p)[COLS], FILE* file) {
    srand(time(NULL));

    // Перемещаем указатель в конец файла
    fseek(file, 0, SEEK_END);

    for (int i = 0; i < ROWS; i++) {
        fprintf(file, "\n");

        for (int j = 0; j < COLS; j++) {
            *(*(p + i) + j) = rand();
            fprintf(file, "%d ", *(*(p + i) + j));
        }
    }

    return 0;
}

int summ_elementsK(FILE* file1, FILE* file2) {
    int summ = 0, num, row = 1, col = 1;
    int count = 0;  // Счетчик для отслеживания нужных значений

    // Читаем все числа из файла
    while (fscanf(file1, "%d", &num) == 1) {
        count++;

        // Проверяем, является ли число частью последней матрицы
        if (count > 20) {
            if (row + col == K) {
                summ += num;
                printf("%d\n", num);
            }

            col++;
            if (col > COLS) {
                col = 1;
                row++;
            }
        }
    }

    fprintf(file2, "result_B = %d", summ);
    return summ;
}


int main() {
	setlocale(LC_ALL, "RUS");
	FILE* data, * result;
	char name1[20], name2[20];
	int X[ROWS][COLS];
	int (*p)[COLS] = X;
	printf("Введите имя файла с данными: ");
	scanf("%s", &name1);
	data = fopen(name1, "r+");
	if (data == NULL) {
		printf("Ошибка чтения файла\n");
		scanf("%s", &name1);
		data = fopen(name1, "r+");
	}
	completion(p, data);
	fclose(data);
	data = fopen(name1, "r");
	printf("Введите имя файла с результатом: ");
	scanf("%s", &name2);
	result = fopen(name2, "a");
	if (result == NULL) {
		printf("Ошибка чтения файла\n");
		scanf("%s", &name2);
		result = fopen(name2, "a");
	}
	summ_elementsK(data, result);
	fclose(data);
	fclose(result);
	return 0;
}