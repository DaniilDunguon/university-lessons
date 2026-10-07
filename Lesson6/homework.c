#include <stdio.h>
#include <locale.h>

void check_position(float x, float y) {
    if (((x >= -6 && x <= -2) && (y >= -4 && y <= 8)) ||
        ((x > -2 && x <= -1) && (y >= 2 && y <= 8))) {
        printf("Точка принадлежит заштрихованной области.\n");
    } else {
        printf("Точка не принадлежит заштрихованной области.\n");
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    
    float x, y;

    printf("Введите x:\n");
    scanf("%f", &x);

    printf("Введите y:\n");
    scanf("%f", &y);

    check_position(x, y);

    return 0;
}
