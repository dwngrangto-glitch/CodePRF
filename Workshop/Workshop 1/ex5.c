#include <stdio.h>
int main() {
    float tongtien, sokm, sophutcho;
    printf("Nhap so km: ");
    if (scanf("%f", &sokm) == 0 || sokm < 0) {
        printf("Nhap sai roi !\n");
        return 1;
    }
    printf("Nhap thoi gian cho: ");
    if (scanf("%f", &sophutcho) == 0 || sophutcho < 0) {
        printf("Nhap sai roi !\n");
        return 1;
    }
    if (sokm <= 0.5) {
        tongtien = 12000;
    } else if (sokm <= 30) {
        tongtien = 12000 + (sokm - 0.5) * 15000;
    } else {
        tongtien = 12000 + (29.5 * 15000) + (sokm - 30) * 12000;
    }
    if (sophutcho > 5) {
        tongtien = tongtien + (sophutcho - 5) * 1000;
    }
    printf("\n%-15s | %-15s | %-15s\n", "So Km", "So phut cho", "Tong tien");
    printf("%-15.1f | %-15.0f | %-15.0f VND\n", sokm, sophutcho, tongtien);
    return 0;
}