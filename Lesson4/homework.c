#include <stdio.h>

int main() {
    int A, B, C, D;
    int condition;

    printf("=== СИГНАЛИЗАЦИЯ В МУЗЕЕ ===\n");
    printf("Введите состояние четырёх датчиков (1 - сработал, 0 - нет): ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Не менее трёх датчиков сработали
    condition = (A + B + C + D) >= 3;

    printf("Запись включена (1 - да, 0 - нет): %d\n", condition);
    return 0;
}
