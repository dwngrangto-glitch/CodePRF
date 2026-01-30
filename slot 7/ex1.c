#include <stdio.h>

int main () {
    int thang;
    printf("Nhap vao thang: ");

    if (scanf("%d", &thang) != 1) {
        printf("Vui long chi nhap so!");
        return 1;
    }

    switch (thang) {
        case 1: case 2: case 3:
            printf("Thang %d thuoc quy 1\n", thang);
            break;
        case 4: case 5: case 6:
            printf("Thang %d thuoc quy 2\n", thang);
            break;
        case 7: case 8: case 9:
            printf("Thang %d thuoc quy 3\n", thang);
            break;
        case 10: case 11: case 12:
            printf("Thang %d thuoc quy 4\n", thang);
            break;
        default:
            printf("Thang khong hop le!");
    }
    return 0;
}