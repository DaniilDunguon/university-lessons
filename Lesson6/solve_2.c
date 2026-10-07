#include <stdio.h>
#include <math.h>
#include <locale.h>

int condiction(int x) {
    int result;

    if (x > 3) {
            result = -3 * x + 9;
        } 
    else if (x <= 3) {
        result = pow(x, 3) / (pow(x, 2) + 8);
    };

    return result;
}

int main() {
    setlocale(LC_ALL, "RUS");
    
    int x, result;
    
    result = condiction(x);

    printf("%d\n", result);

    return 0;
}
