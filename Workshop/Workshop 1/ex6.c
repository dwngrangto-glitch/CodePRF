#include <stdio.h>

int main() {
    float diem_cc, diem_gk, diem_ck;
    float diem_tong_ket;
    char diem_chu;
    int check;

    printf("--- Tinh diem hoc phan ---\n");

    // 1. Nhập và kiểm tra điểm Chuyên cần
    printf("Nhap diem chuyen can (10%%): ");
    check = scanf("%f", &diem_cc);

    // Kiểm tra: Nếu không phải số (check == 0) HOẶC điểm nhỏ hơn 0 HOẶC lớn hơn 10
    if (check == 0 || diem_cc < 0 || diem_cc > 10) {
        printf("Loi: Diem nhap vao khong hop le (phai la so tu 0 den 10).\n");
        return 1; // Thoát chương trình ngay lập tức với mã lỗi
    }

    // 2. Nhập và kiểm tra điểm Giữa kỳ
    printf("Nhap diem giua ky (30%%): ");
    check = scanf("%f", &diem_gk);
    if (check == 0 || diem_gk < 0 || diem_gk > 10) {
        printf("Loi: Diem nhap vao khong hop le.\n");
        return 1;
    }

    // 3. Nhập và kiểm tra điểm Cuối kỳ
    printf("Nhap diem cuoi ky (60%%): ");
    check = scanf("%f", &diem_ck);
    if (check == 0 || diem_ck < 0 || diem_ck > 10) {
        printf("Loi: Diem nhap vao khong hop le.\n");
        return 1;
    }

    // --- Nếu vượt qua hết các if trên, chương trình mới tính toán tiếp ---
    diem_tong_ket = (diem_cc * 0.1) + (diem_gk * 0.3) + (diem_ck * 0.6);
    printf("\nDiem tong ket so: %.1f\n", diem_tong_ket);

    if (diem_tong_ket >= 8.5) {
        diem_chu = 'A';
    } else if (diem_tong_ket >= 7.0) {
        diem_chu = 'B';
    } else if (diem_tong_ket >= 5.5) {
        diem_chu = 'C';
    } else if (diem_tong_ket >= 4.0) {
        diem_chu = 'D';
    } else {
        diem_chu = 'F';
    }

    printf("Diem chu: %c\n", diem_chu);

    if (diem_cc >= 4.0 && diem_gk >= 4.0 && diem_ck >= 4.0 && diem_chu != 'F') {
        printf("Ket qua: DA TOT NGHIEP\n");
    } else {
        printf("Ket qua: TRUOT\n");
    }

    return 0;
}