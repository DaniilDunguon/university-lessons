#include <stdio.h>
#include <locale.h>



void main() {
	int N = 13, K = 50;
	setlocale(LC_ALL, "RUS");
	printf("«Сейчас %d часов %d минут 00 секунд»\n", N, K);

	printf("«Идет %d минута суток»\n", (N * 60 + K));

	printf("«До полуночи осталось %d часов и %d минут»\n", 24 - N, 60 - K);

	printf("«С 8.00 прошло %d секунд»\n", ((N * 60 * 60 + K * 60) - 8 * 60 * 60));

	printf("«Текущий час = %5.2f суток  и текущая минута = %5.2f часа»", N/24., K/60.);
}