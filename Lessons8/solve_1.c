#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    int n, m, s, k;
    
    printf("Введите число n:\n");
    scanf("%d", &n);

    printf("Введите число m:\n");
    scanf("%d", &m);

    for (int i=m; i >= n; i--) {
        s+=i;
        printf("выполнено %d раз\n", k++); 
    };

    printf("результат %d\n", s);


}