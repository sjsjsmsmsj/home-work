#include<stdio.h>
int main() {
    float soLuong, donGia;
    printf("Please, input soLuong and donGia: ");
    scanf("%f%f", &soLuong, &donGia);
    float soTien = soLuong * donGia;
    float Thue = soTien * 0.1;
    printf("soTien = %f\t Thue = %f\n", soTien, Thue);
}