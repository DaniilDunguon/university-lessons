#include <stdio.h>
#include <math.h>

int main() {
    double a = 2.0;      
    double b = 4.1;      
    double h;         
    double x, y;

    printf("y = |lg(x)| - (x - 2)^2\n");
    printf("Введите шаг табуляции: ");
    scanf("%lf", &h);

    printf("\n_______________");
    printf("\n|   x   |  f(x)  |");
    printf("\n|_______|________|");

    for (x = a; x <= b + 1e-9; x += h) {
        y = fabs(log10(x)) - (x - 2) * (x - 2);
        printf("\n| %5.2f | %6.3f |", x, y);
    }

    printf("\n|_______|________|\n");
    return 0;
}