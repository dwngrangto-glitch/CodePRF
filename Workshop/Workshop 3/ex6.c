#include <stdio.h>
void show_menu() {
    printf("\n====MAY TINH BO TUI====\n1. Cong | 2. Tru | 3. Nhan | 4. Chia | 0. Thoat\n=======================\nChon: ");
}
void processor() {
    int choice;
    float n1, n2;
    
    while (1) {
        show_menu();
        if (scanf("%d", &choice) != 1) break;
        if (choice == 0) { printf("Da thoat.\n"); break; }
        if (choice < 1 || choice > 4) { printf("Khong hop le!\n"); continue; }

        printf("Nhap 2 so: ");
        scanf("%f %f", &n1, &n2);

        switch (choice) {
            case 1: printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2); break;
            case 2: printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2); break;
            case 3: printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2); break;
            case 4: 
                if (n2 != 0) printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
                else printf("Loi: Khong the chia cho 0!\n");
                break;
        }
    }
}
int main() {
    processor();
    return 0;
}