#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    int a, b, c, d, x, y, z;
    printf("Phuong trinh co dang Ax + by + cz + d = 0");
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &x, &y, &z);
    float distance = abs(a * x + b * y + c * z + d) / sqrt(a * a + b * b + c * c);
    printf("distance = %f\n", distance);
    return 0;
}