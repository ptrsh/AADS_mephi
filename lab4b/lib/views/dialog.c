#include <stdio.h>
#include <string.h>
#include "dialog.h"
#include "../other/readline.h"

void print_menu() {
    printf("+---------------+--------------------------------+\n");
    printf("| Номер команды |            Команда             |\n");
    printf("+===============+================================+\n");
    printf("|             0 | Выход                          |\n");
    printf("|             1 | Добавить элемент               |\n");
    printf("|             2 | Поиск по ключу                 |\n");
    printf("|             3 | Поиск наиболее удаленных эл-ов |\n");
    printf("|             4 | Удалить по ключу               |\n");
    printf("|             5 | Прямой обход дерева            |\n");
    printf("|             6 | Форматированный вывод дерева   |\n");
    printf("|             7 | Выполнить таймирование         |\n");
    printf("|             8 | Загрузить дерево из файла      |\n");
    printf("+---------------+--------------------------------+\n");
    printf("Введите команду:\n");
}

int dialog() {
    print_menu();
    int input = read_num("Вы должны ввести число от 0 до 8! Попробуйте ещё раз:", 0, 8);
    return input;
}