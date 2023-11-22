#include<stdio.h>
int main() {
    float toan, ly, hoa;
    printf("Please, input toan, ly, hoa: ");
    scanf("%f%f%f", &toan, &ly, &hoa);
    float total = 1.0*(toan + ly + hoa)/3;
    printf("total = %f\n", total);
    return 0;
}