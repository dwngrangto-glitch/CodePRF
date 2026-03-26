#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;

    // --- PHẦN 1: NHẬP DỮ LIỆU VÀ GHI VÀO FILE ---
    printf("Nhap vao n: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao tung phan tu cua mang: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Mở file để ghi (w)
    fp = fopen("baitap2.txt", "w");
    if (fp == NULL) {
        printf("Loi: Khong the tao file!");
        return 1;
    }

    // Ghi số n vào dòng đầu tiên
    fprintf(fp, "%d\n", n);

    // Ghi mảng vào dòng tiếp theo
    for(i = 0; i < n; i++) {
        fprintf(fp, "%d ", a[i]);
    }
    fclose(fp);
    printf("\nDa ghi du lieu vao baitap2.txt xong!\n");


    // --- PHẦN 2: ĐỌC DỮ LIỆU TỪ FILE VÀ IN RA MAN HINH ---
    fp = fopen("baitap2.txt", "r");
    if (fp == NULL) {
        printf("Loi: Khong the mo file de doc!");
        return 1;
    }

    int n_file;
    // Bước 1: Đọc số lượng phần tử n từ dòng đầu tiên
    fscanf(fp, "%d", &n_file);
    printf("\nSo luong phan tu doc duoc tu file: %d\n", n_file);

    // Bước 2: Đọc mảng từ dòng tiếp theo
    int b[n_file];
    printf("Cac phan tu trong mang la: ");
    for(i = 0; i < n_file; i++) {
        fscanf(fp, "%d", &b[i]); // fscanf sẽ tự bỏ qua khoảng trắng để tìm số tiếp theo
        printf("%d ", b[i]);
    }

    fclose(fp);
    return 0;
}