#include <stdio.h>

int solve_d1(int number) {
    int d1 = number / 100;

    return d1;
}
int solve_d2(int number) {
    int d2 = (number / 10) % 10; 

    return d2;
}

int solve_d3(int number) {
    int d3 = number % 10;  

    return d3;
}

int reverse_sum(int d1, int d2, int d3) {
    int reversed = d3 * 100 + d2 * 10 + d1;

    return reversed;
}

int main() {
    int n;
    printf("Введите трёхзначное число: ");
    scanf("%d", &n);
 
    int d1 = solve_d1(n);
    int d2 = solve_d2(n);
    int d3 = solve_d3(n);

    int reversed = reverse_sum(d1, d2, d3);

    printf("Последняя цифра: %d\n", d3);
    printf("Первая цифра:    %d\n", d1);
    printf("Сумма цифр:      %d\n", d1 + d2 + d3);
    printf("Число наоборот:  %d\n", reversed);

    return 0;
}
