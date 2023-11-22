#include<stdio.h>
int main() {
    float r, S, C;
    printf("Please, r = ");
    scanf("%f", &r);
    S = 3.14 * r * r;
    C = 2 * 3.14 * r;
    printf("S = %f\t C = %f\n", S, C);
    return 0;
}