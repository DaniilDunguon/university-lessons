#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int num1, num2;

    puts("Введите первое число:");
    scanf("%d", &num1);
    printf("Введено число %d\n", num1);

    puts("Введите второе число:");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);

    printf("\nСумма:        %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Разность:     %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Произведение: %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Частное:      %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        printf("Остаток:      %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Деление на ноль невозможно\n");
    }

    return 0;
}
