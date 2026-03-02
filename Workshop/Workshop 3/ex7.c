#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;   
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int a, b;
    while (true) {
        printf("Nhap vao khoang [a, b] (vi du: 10 50): ");
        if (scanf("%d %d", &a, &b) == 2) {
            break;
        } else {
            printf("Loi: Vui long chi nhap so nguyen!\n");
            while (getchar() != '\n');
        }
    }
    if (a > b) {
        int temp = a; a = b; b = temp;
    }

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i > 2 && i % 2 == 0) {
            continue;
        }
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}