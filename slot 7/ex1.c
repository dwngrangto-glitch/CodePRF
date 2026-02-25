/*Viết chương trình sử dụng switch case default thay cho if else (dùng chỉ khi những trường hợp đã xác định được thông tin trước)*/
#include <stdio.h>

int main () {
    int thang;
    printf("Nhap vao thang: ");
    // Kiểm tra đầu vào có phải là số nguyên không
    if (scanf("%d", &thang) != 1) {
        printf("Vui long chi nhap so!");
        return 1;// Kết thúc chương trình với mã lỗi 1
    }

    switch (thang) {// Sử dụng switch case để xác định quý của tháng
        case 1: case 2: case 3:// Các trường hợp tháng 1, 2, 3
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
        default:// Trường hợp tháng không hợp lệ, giống như else
            printf("Thang khong hop le!");
    }
    return 0;
}