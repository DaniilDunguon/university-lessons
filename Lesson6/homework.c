#include <stdio.h>
#include <locale.h>

int check_position(float x, float y) {
    int state;

    if (((x >= -6 && x <= -2) && (y >= -4 && y <= 8)) ||
        ((x > -2 && x <= -1) && (y >= 2 && y <= 8))) {
        state = 1;
    } 
    else {
        state = 0;
    };
    
    return state;
}

int main() {
    setlocale(LC_ALL, "RUS");
    
    float x, y;
    int state; 

    printf("Введите x:\n");
    scanf("%f", &x);

    printf("Введите y:\n");
    scanf("%f", &y);
    
    state = check_position(x, y);
    
    if (state) {
        printf("Точка принадлежит заштрихованной области.\n");
    }
    else {
        printf("Точка не принадлежит заштрихованной области.\n");
    }

    return 0;
}
