#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    double a, b;

    printf("Введите значение a: ");
    scanf("%lf", &a);
    printf("Введите значение b: ");
    scanf("%lf", &b);

    printf("======================================\n");
    printf("|%12s|%12s|%12s|\n", "a * b", "a + b", "a - b");
    printf("--------------------------------------\n");
    printf("|%12.2lf|%12.2lf|%12.2lf|\n", a, b, a);
    printf("--------------------------------------\n");
    printf("|%12.2lf|%12.2lf|%12.2lf|\n", a * b, a + b, a - b);
    printf("======================================\n");

    return 0;
}
