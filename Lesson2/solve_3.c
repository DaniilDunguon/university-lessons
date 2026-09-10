#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int n = 3, L = 333, k = 3, m = 3;

    double result = (double)n / L;

    printf("%-20s\n", "Дано:");
    printf("%20d\n", n);
    printf("%20d\n", L);
    printf("%20s\n", "___________");
    
    printf("%-20s\n", "Ответ:");
    printf("%+0*.*f\n", k + m + 2, m, result);

    return 0;
}