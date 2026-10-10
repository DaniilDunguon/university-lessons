#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    char c;
    printf("Введите буквы или цифры: ");
    scanf("%c", c);
    switch (c)
    {
        case '1234567890':
    printf("Введена цифра.\n");
    break;
        case 'йцукенгшщзхъфывапролджэячсмитьбю':
    printf("Введена буква.\n");
    break;
        default:
            printf("Неизвестный символ\n");
    }
    return 0;
}