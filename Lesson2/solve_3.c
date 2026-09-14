#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int n = 2, L = 133, k = 2, m = 4;

    printf("%-20s\n", "Дано:");
    printf("%20d\n", n);
    printf("%20d\n", L);
    printf("%20s\n", "___________");
    
    printf("%-20s\n", "Ответ:");
    printf("%+0*.*f\n", k + m, m - 1, ((n * 1.) / (L * 1.)));

    return 0;
}
