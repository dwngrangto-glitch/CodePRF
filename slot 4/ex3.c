#include <stdio.h>

int main() {
    float n;
    int PhanNguyen;
    float PhanThuc;
    printf("Nhap so thuc: ");
    scanf("%f", &n); 
    PhanNguyen = (int)n;
    PhanThuc = n - PhanNguyen;
	printf("Gia tri da nhap: %.4f\n", n);
    printf("Phan nguyen la: %d\n", PhanNguyen);
    printf("Phan thuc la: %.4f\n", PhanThuc);
    return 0;
}