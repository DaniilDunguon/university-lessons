#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    setlocale(LC_ALL, "RUS");
    int k;
    scanf("%d", &k);

    char* ending;

    switch (k) {
        case 1:
            ending = "ка";
            break;
        case 2: case 3: case 4:
            ending = "ки";
            break;
        case 5: case 6: case 7: case 8: case 9: case 10:
            ending = "ок";
            break;
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19:
            ending = "ок";
            break;
        default:
            ending = "ок";
            break;
    }

    printf("в программе найдено %d ошиб%s\n", k, ending);
    return 0;
}
