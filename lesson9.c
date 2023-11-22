#include<stdio.h>
int main() {
    int n;
    printf("Please, input for n: ");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0)
    {
        int m = n % 10;
        sum += m;
        n /= 10;
    }
    printf("sum = %d\n", sum);
    return 0;
    
}