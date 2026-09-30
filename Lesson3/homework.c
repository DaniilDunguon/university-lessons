#include <stdio.h>

int main() {
    float c;

    scanf("%f", &c);

    printf("%.2f\n", c * 9.0f / 5.0f + 32.0f);
    printf("%.2f\n", c + 273.15f);

    return 0;
}
