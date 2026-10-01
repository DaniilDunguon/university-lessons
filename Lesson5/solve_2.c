#include <stdio.h>
#include <math.h>
#include <locale.h>
#define c 1.3

int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;

    printf("Введите X: ");
    scanf("%f", &x);


    printf("Введите Y: ");
    scanf("%f", &y);

    float a = pow(c, 3) + log(fabs(x));
    float b = pow(a, 2) + sqrt(c);
    y = exp(x) + pow(5.8, -b);

    printf("Y = %.1f\n", y);
    return 0;
}
