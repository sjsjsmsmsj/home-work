#include<stdio.h>
int main() {
    int soKm;
    printf("So km da di: ");
    scanf("%d", &soKm);
    int sum = 0;
    for (int i = 1; i <= soKm; i ++) {
        if(i == 1) 
            sum += 15000;
        else
            sum += 12000;
    }
    float thue = sum * 0.1;
    float sum1 = sum + thue;
    printf("Tong tien phai tra = %f\n", sum1);
    return 0;
}