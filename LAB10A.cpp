#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int completion(int* p, FILE *file) {

	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		*(p + i) = rand();
		fprintf(file, "%d\n", *(p + i));
		
	}
	fprintf(file, "\n");
	return 0;
}

int alternating_sum(FILE *file, FILE *file2) {
	int summ = 0;
	int num;
	int i = 0;
	while (fscanf(file, "%d", &num) == 1) {
		if (i % 2 != 0) {
			summ += num;
		}
		else {
			summ -= num;
		}
		i++;
	}
	
	return fprintf(file2, "result_A = %d\n", summ);
}



int main() {
	setlocale(LC_ALL, "RUS");
	FILE *data, *result;
	char name[20], name2[20];
	int res[20], alt_sum;
	int* p = res;
	printf("Введите имя файла с данными: ");
	scanf("%s", &name);
	data = fopen(name, "w");
	completion(p, data);
	fclose(data);
	printf("Введите имя файла с результатами: ");
	scanf("%s", &name2);
	result = fopen(name2, "w");
	data = fopen(name, "r");
	if (data == NULL) {
		printf("Ошибка чтения файла\n");
		scanf("%s.txt", &name);
		data = fopen(name, "r");
	}

	alternating_sum(data, result);
	fclose(result);
	return 0;
}
