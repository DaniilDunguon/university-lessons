#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    float x, y;ы
    char c;
    printf("Введите два числа и оператор между ними: ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c)
    {
        case '+':
        printf("Сумма цифр =%f\n", x+y);
        break;
        case '-':
        printf("Разность цифр =%f\n", x-y);
        break;
        case '*':
        printf("Произведение цифр =%f\n", x*y);
        break;
        case '/':
        printf("Частное цифр =%f\n", x/y);
        break;
        case '**':
        printf("Число x в степени y =%f\n", pow(x, y));
        break;
        default:
        printf("Неизвестный символ\n");
    }
    return 0;
}