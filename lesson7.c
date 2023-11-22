#include<stdio.h>
#include<math.h>
int main() {
    float x1, y1, x2, y2, x3, y3;
    printf("Please, input A(x1, y1), B(x2, y2), C(x3, y3)");
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    float AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    float BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float p = 1.0 * (AB + AC + BC) / 2;
    float S = sqrt(p * (p - AB) * (p - AC) * (p - BC));
    float C = AB + AC + BC;
    printf("Dien tich S = %f\t chu vi C = %f\n", S, C);
    return 0;
}