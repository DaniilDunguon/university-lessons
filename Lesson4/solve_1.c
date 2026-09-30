#include <stdio.h>
#include <math.h>

int main() {
    // --- Листинг 4.1: ввод и вывод значений разного типа ---
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("=== Вывод значений разных типов ===\n");
    printf("char:   %c (код %d)\n", c, c);
    printf("int:    %d\n", i);
    printf("float:  %f\n", f);
    printf("double: %e\n", d);

    printf("\n--- Ввод с консоли ---\n");
    printf("Введите символ, целое, float, double: ");
    scanf(" %c %d %f %lf", &c, &i, &f, &d);
    printf("Вы ввели: %c %d %f %e\n", c, i, f, d);

    // --- Задача 1а: целая и дробная часть вещественного числа ---
    double num;
    printf("\n=== Задача 1а ===\n");
    printf("Введите вещественное число: ");
    scanf("%lf", &num);

    int whole = (int)num;
    double frac = num - whole;

    printf("Целая часть: %d\n", whole);
    printf("Дробная часть: %lf\n", frac);

    // --- Задача 1б: шестнадцатеричный и десятичный код символа ---
    char ch;
    printf("\n=== Задача 1б ===\n");
    printf("Введите символ: ");
    scanf(" %c", &ch);

    printf("Десятичный код:    %d\n", ch);
    printf("Шестнадцатеричный: 0x%X\n", ch);

    // --- Задача 1в: десятичное число, соответствующее 1/i ---
    int k;
    printf("\n=== Задача 1в ===\n");
    printf("Введите целое число i: ");
    scanf("%d", &k);

    if (k == 0) {
        printf("Деление на ноль!\n");
    } else {
        double result = 1.0 / k;
        printf("1 / %d = %lf\n", k, result);
    }

    return 0;
}
