#include <stdio.h>

int main() {
    int n;
    printf("Введите n: ");
    scanf("%d", &n);

    int p = 1;
    for (int i = 0; i <= n; i++) {
        printf("2^%d = %10lld\n", i, p);
        p *= 2;
    }

    // в килобайтах
    printf("Результат: %.1fK\n", (1LL << n) / 1024.0);

    return 0;
}