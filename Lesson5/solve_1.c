#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS")
    float gr;

    printf("Введите угол в градусах: ");
    scanf("%f", &gr);

    float rad = gr * M_PI / 180.0f;
    float result = sin(rad);

    printf("sin(%.0f град) = %.6f\n", gr, result);
    return 0;
}
