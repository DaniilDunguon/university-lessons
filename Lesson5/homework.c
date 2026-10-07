#include <stdio.h>
#include <locale.h>
#include <math.h>

double chislitel(double x, double y) {
    double result = pow(y + pow(x - 1, 1./3.), 0.25);

    return result;
}

double znamenatel(double x, double y, double z) {
    double result = fabs(x - y) * (sin(z) * sin(z) + tan(z));

    return result;
}

int main() {
    double x = 17.421, y = 10.365e-3, z = 0.828e5, result;

    setlocale(LC_ALL, "RUS");

    result = chislitel(x, y) / znamenatel(x, y, z);

    printf("%.6f", result);

}