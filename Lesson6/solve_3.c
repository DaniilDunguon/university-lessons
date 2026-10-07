#include <stdio.h>
#include <locale.h>

int main() {
    int year;

    setlocale(LC_ALL, "UTF8");

    printf("Введите год:\n");
    scanf("%d", &year);

    int ostatok = yeas % 4;

    if ((ostatok == 0 && ostatok % 100 != 0) || ostatok % 400 == 0) {
        printf("В %d году 366 дней", year);
    }
    else {
        printf("В %d году 365 дней", year);
    }
}