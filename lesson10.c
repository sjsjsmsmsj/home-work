#include<stdio.h>
#include<math.h>
int main() {
    int a;
    scanf("%d", &a);
    int S = a * a;
    int C = 2 * a;
    float duongCheo = a * sqrt(2);
    printf("S = %d\t C = %d\t duong Cheo = %f\n", S, C , duongCheo);
    return 0;
}