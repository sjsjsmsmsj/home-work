#include<stdio.h>
#include<math.h>
int main() {
    float x1, y1, x2, y2;
    printf("Please, input A(x1, y1), B(x2, y2) :");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance = %f\n", distance);
    return 0;
}