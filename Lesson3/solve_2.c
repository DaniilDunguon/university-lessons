#include <stdio.h>
#include <locale.h>

#define D 2.54

int main() {
    setlocale(LC_ALL, "RUS");

    int dym;
    float result;

    printf("Введите значение в дюймах: ");
    scanf("%d", &dym);

    result = D * dym;

    printf("%d дюймов – это %.2f см\n", dym, result);

    /* Испанский дюйм */
    #define D_ES 2.32166f
    printf("%d испанских дюймов – это %.2f см\n", dym, D_ES * dym);

    /* Старолитовский дюйм */
    #define D_LT 2.7076f
    printf("%d старолитовских дюймов – это %.2f см\n", dym, D_LT * dym);

    return 0;
}
