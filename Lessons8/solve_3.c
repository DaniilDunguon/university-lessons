#include <stdio.h>

int main() {
    int n;
    printf("Введите n: ");
    scanf("%d", &n);

    double sum = 0.0;

    for (int k = 1; k <= n; k++) {
        int denom = 2 * k + 1;
        sum += 1.0 / (denom * denom);
    }

    printf("Сумма = %.10f\n", sum);
    return 0;
}