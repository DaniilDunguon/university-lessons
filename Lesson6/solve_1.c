#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int yeas;

    printf("Введите год: ");
    scanf("%d", &yeas);

    int ostatok = yeas % 4;

    if ((ostatok == 0 && ostatok % 100 != 0) || ostatok % 400 == 0) {
        printf("год %d високосный", yeas);
    } else {
        printf("год %d не високосный", yeas);
    };
    return 0;
}
