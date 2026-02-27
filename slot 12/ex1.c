#include <stdio.h>

int tinhTongCacUoc(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong;
}

int main() {
    int n;
    scanf("%d", &n);
    int ketQua = tinhTongCacUoc(n);
    printf("Tong cac uoc cua %d la: %d\n", n, ketQua);

    return 0;
}