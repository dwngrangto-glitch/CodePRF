#include <stdio.h>
int main() {
    float cc, gk, ck, dtk;
    char diemChu;

    printf("Nhap diem chuyen can (0-10): ");
    if (scanf("%f", &cc) == 0 || cc < 0 || cc > 10) {
        printf("Nhap sai roi !\n");
        return 1;
    }

    printf("Nhap diem giua ky (0-10): ");
    if (scanf("%f", &gk) == 0 || gk < 0 || gk > 10) {
        printf("Nhap sai roi !\n");
        return 1;
    }

    printf("Nhap diem cuoi ky (0-10): ");
    if (scanf("%f", &ck) == 0 || ck < 0 || ck > 10) {
        printf("Nhap sai roi !\n");
        return 1;
    }

    dtk = (cc * 0.1) + (gk * 0.3) + (ck * 0.6);

    if (dtk >= 8.5) {
        diemChu = 'A';
    } else if (dtk >= 7.0) {
        diemChu = 'B';
    } else if (dtk >= 5.5) {
        diemChu = 'C';
    } else if (dtk >= 4.0) {
        diemChu = 'D';
    } else {
        diemChu = 'F';
    }

    printf("\n%-10s | %-10s | %-10s | %-10s | %-10s\n", "Chuyen can", "Giua ky", "Cuoi ky", "Tong ket", "Loai");
    printf("%-10.1f | %-10.1f | %-10.1f | %-10.1f | %-10c\n", cc, gk, ck, dtk, diemChu);
    if (cc >= 4.0 && gk >= 4.0 && ck >= 4.0 && diemChu != 'F') {
        printf("\nChuc mung! Ban du dieu kien tot nghiep.\n");
    } else {
        printf("\nRat tiec! Ban khong du dieu kien tot nghiep.\n");
    }
    return 0;
}