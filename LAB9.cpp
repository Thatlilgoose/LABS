#include <stdio.h>
#include <locale.h>
#include <string.h>

struct charact {
	double speed;
	double stop;
};

struct Automobilies {
	char mark[20];
	long price;
	struct charact ch;
};


void header_table() {
	printf(" ______________________________________\n");
	printf("|     |       |              |         |\n");
	printf("|     |       |Характеристики|         |\n");
	printf("|Номер| Марка |--------------|Стоимость|\n");
	printf("|     |       | 0-100 | 80-0 |         |\n");
	printf("|_____|_______|_______|______|_________|\n");
}

void row_and_cols_table(int number, struct Automobilies Auto) {
	printf("|%5d|%7s|%7.1f|%6.1f|%9d|\n", number, Auto.mark, Auto.ch.speed, Auto.ch.stop, Auto.price);
	printf("|_____|_______|_______|______|_________|\n");
	
}
void swap_rows(struct Automobilies *table,int row1,int row2) {
	struct Automobilies temp = table[row1];
	table[row1] = table[row2];
	table[row2] = temp;
}
int main() {
	struct Automobilies cars[] = {
		{ "Audi",7000000, { 4.2, 3.7 }},
		{ "BMW", 10000000, { 3.4, 2.7 } },
		{ "Skoda",4500000, { 6.5, 4.3 } },
		{ "UAZ",1500000, { 12.7, 6.6 } }
	};
	setlocale(LC_ALL, "Russian");
	header_table();
	for (int i = 1; i <= 4; i++) {
		row_and_cols_table(i, cars[i-1]);
	}
	printf("\nПреобразованная таблица:\n");
	swap_rows(cars, 0, 3);
	header_table();
	for (int i = 1; i <= 4; i++) {
		row_and_cols_table(i, cars[i - 1]);
	}
	return 0;
}