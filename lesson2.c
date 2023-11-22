#include<stdio.h>
int main() {
    float a, b;
    printf("Please, input a, b: ");
    scanf("%f%f", &a, &b);
    float S = a * b, C = a + b;
    printf("S = %f\t C = %f\n", S, C);
    return 0;
}