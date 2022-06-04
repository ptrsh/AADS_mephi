#include <stdio.h>
#include <string.h>
#include "dialog.h"
#include "../other/readline.h"

void print_menu() {
    printf("+---------------+--------------------------------+\n");
    printf("| Номер команды |            Команда             |\n");
    printf("+===============+================================+\n");
    printf("|             0 | Выход                          |\n");
    printf("|             1 | Добавить вершину               |\n");
    printf("|             2 | Добавить ребро                 |\n");
    printf("|             3 | Удалить вершину                |\n");
    printf("|             4 | Удалить ребро                  |\n");
    printf("|             5 | Найти кратчайший путь          |\n");
    printf("|             6 | Поиск в глубину                |\n");
    printf("|             7 | Выделить связные компоненты    |\n");
    printf("|             8 | Вывести матрицу смежности      |\n");
    printf("|             9 | Нарисовать граф в graphviz     |\n");
    printf("|            10 | Загрузить города России        |\n");
    printf("+---------------+--------------------------------+\n");
    printf("Введите команду:\n");
}

int dialog() {
    print_menu();
    int input = read_num("Вы должны ввести число от 0 до 10! Попробуйте ещё раз:", 0, 10);
    return input;
}