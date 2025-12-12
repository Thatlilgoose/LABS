#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct charact {
    double speed;
    double stop;
};

typedef struct Automobilies {
    char mark[20];
    long price;
    struct charact ch;
    struct Automobilies* next;
    struct Automobilies* prev;
} Auto;

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

struct Automobilies* add_car(struct Automobilies* head, struct Automobilies* prev, const char* mark, long price, double speed, double stop) {
    struct Automobilies* node = (struct Automobilies*)malloc(sizeof(struct Automobilies));
    if (!node) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    
    strncpy_s(node->mark, mark, sizeof(node->mark) - 1);
    node->mark[sizeof(node->mark) - 1] = '\0';
    node->price = price;
    node->ch.speed = speed;
    node->ch.stop = stop;

   
    node->prev = NULL;
    node->next = NULL;

    if (!prev) {
        
        node->next = head;
        if (head) {
            head->prev = node;
        }
        return node; 
    }


    node->next = prev->next;
    node->prev = prev;
    if (prev->next) {
        prev->next->prev = node;
    }
    prev->next = node;

    return head;
}

void print_list(struct Automobilies* head) {
    struct Automobilies* current = head;
    int number = 1;
    header_table();
    while (current) {
        row_and_cols_table(number++, *current);
        current = current->next;
    }
}

void free_list(struct Automobilies* head) {
    struct Automobilies* current = head;
    while (current) {
        struct Automobilies* next = current->next;
        free(current);
        current = next;
    }
}

void swap_rows(struct Automobilies** head_ref) {
    if (!head_ref || !*head_ref || !(*head_ref)->next) {
        return;
    }

    struct Automobilies* first = *head_ref;
    struct Automobilies* current = *head_ref;
    struct Automobilies* prev_of_last = NULL;

    
    while (current->next) {
        prev_of_last = current;
        current = current->next;
    }

    struct Automobilies* last = current;

    
    if (prev_of_last) {
        prev_of_last->next = first;
    }

    last->next = first->next;
    first->next = NULL;

    
    last->prev = NULL;
    if (last->next) {
        last->next->prev = last;
    }
    first->prev = prev_of_last;

    *head_ref = last;
}

int main() {
    setlocale(LC_ALL, "Russian");

    struct Automobilies* head = NULL;

  
    head = add_car(head, NULL, "UAZ", 1500000, 12.7, 6.6);
    head = add_car(head, NULL, "Skoda", 4500000, 6.5, 4.3);
    head = add_car(head, NULL, "BMW", 10000000, 3.4, 2.7);
    head = add_car(head, NULL, "Audi", 7000000, 4.2, 3.7);

    printf("Исходная таблица:\n");
    print_list(head);

    swap_rows(&head);
    printf("\nПреобразованная таблица:\n");
    print_list(head);

    free_list(head);
    return 0;
}