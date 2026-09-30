#include <stdio.h>

int condution_solve(int A, int B, int C, int D) {
    int condition = (A + B + C + D) >= 3;

    return condition;
}

int main() {
    int A, B, C, D;
    int condition;

    printf("Введите состояние четырёх датчиков (1 - сработал, 0 - нет): ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    condition = condution_solve(A, B, C, D);

    printf("Запись включена (1 - да, 0 - нет): %d\n", condition);
    return 0;
}
