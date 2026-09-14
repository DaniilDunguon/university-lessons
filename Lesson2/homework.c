#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ".UTF8");

    double h = 5.0;
    double A = 0.7854;
    double k = 0.1; 

    double s = h / k - h / tan(A);

    printf("Санки съезжают с горки высотой %.2f м "
           "с углом наклона %.4f рад и коэффициентом трения %.2f.\n"
           "Путь, который они проедут по горизонтали до остановки, "
           "равен %.2f м.\n",
           h, A, k, s);

    return 0;
}