#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, ".UTF8");
	puts("Нажмите Enter для продолжения...");
	getchar();
	puts("Продолжение программы");

	return 0;
}