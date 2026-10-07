#include <stdio.h>
#include <math.h>
#include <locale.h>
#define c 1.3

int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;
    int A, B, C;

    printf("Введите X: ");
    scanf("%f", &x);


    printf("Введите Y: ");
    scanf("%f", &y);

    float a = pow(c, 3) + log(fabs(x));
    float b = pow(a, 2) + sqrt(c);
    y = exp(x) + pow(5.8, -b);

    printf("Y = %.1f\n", y);

    // 3-е задание
    A = (int)a;
    B = (int)b;
    C = (int)y;

    int condiction = (A  % 2 == 0 || B % 2 == 0) && (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    if (condiction) {
        printf("Условие выполнено");
    }
    else {
        printf("Условие не выполнено");
    }
    return 0;
}
