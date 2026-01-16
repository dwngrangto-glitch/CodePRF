#include <stdio.h>
int main() {
    int a, b;
    char pt;
    printf("Nhap hai so a,b: ");
    scanf("%d,%d", &a, &b);
    printf("Nhap phep toan: ");
    scanf(" %c", &pt); 
    if (b == 0) {
        printf("Khong the chia cho 0");
    } else {
        printf("Ket qua: %.2f", (float)a / b);
    }
    return 0;
}