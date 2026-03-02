#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// Hàm kiểm tra số nguyên tố
bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;   
    // Chỉ cần kiểm tra đến căn bậc hai của n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    printf("Nhap vao khoang [a, b]: ");
    scanf("%d %d", &a, &b);
    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);
    for (int i = a; i <= b; i++) {
        // Neu i la so chan va lon hon 2, bo qua ngay lap tuc
        if (i > 2 && i % 2 == 0) {
            continue;
        }
        // Goi ham kiem tra neu khong bi loai bo boi lenh continue
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}