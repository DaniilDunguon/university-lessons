#include <stdio.h>

int main() {
    int a = 11, b = 3;

    int x = a / b;
    float y = a / b; 
    double z = a / b;

    printf("=== Неявное преобразование ===\n");
    printf("int   x = a/b = %d\n", x);  
    printf("float y = a/b = %f\n", y); 
    printf("double z = a/b = %lf\n", z);

    printf("\n=== Явное преобразование ===\n");
    printf("(float)a/b      = %f\n", (float)a / b);    
    printf("(double)a/b     = %lf\n", (double)a / b);   
    printf("a/(float)b      = %f\n", a / (float)b);    
    printf("(float)(a/b)    = %f\n", (float)(a / b)); 

    return 0;
}
