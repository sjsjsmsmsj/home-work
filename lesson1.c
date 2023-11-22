#include<stdio.h>
int main() {
    float a, b, c;
    printf("Please, input for a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    float mul, total;
    mul = 1.0 * a * b * c;
    total = a + b + c;
    printf("mul = %f\t total = %f\n", mul, total);
    return 0;
}