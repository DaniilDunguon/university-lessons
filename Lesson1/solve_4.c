#include <stdio.h>
#include <locale.h>

int name(void) {
    puts("* * * * * * * * * * * * * * * * * * * * * *");
    puts("*                                         *");
    puts("* тема: Разработка консольного приложения *");
    puts("*      Выполнил Василенко Д. Р.           *");
    puts("*      Группа БОТИ 262                    *");
    puts("*                                         *");
    puts("* * * * * * * * * * * * * * * * * * * * * *");

    return 0;
}

void date() {
    puts(" _      _  _   _  _ ");
    puts(" _||_| | ||_| | ||_|");
    puts("|_   |.|_| _|.|_||_|");
}

int main(void) {
    setlocale(LC_ALL, ".UTF8");
    name();
    date();
}