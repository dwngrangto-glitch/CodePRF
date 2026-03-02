#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void play_game() {
    // Khởi tạo số ngẫu nhiên từ 1 đến 100
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int MAX_ATTEMPTS = 7;
    printf("\n--- CHAO MUNG DEN VOI GAME DOAN SO ---");
    printf("\nMay da chon mot so tu 1 den 100. Ban co %d luot doan.\n", MAX_ATTEMPTS);
    while (attempts < MAX_ATTEMPTS) {
        printf("\nLuot thu %d. Nhap so ban doan: ", attempts + 1);
        scanf("%d", &guess);
        // Logic: Neu nhap so ngoai pham vi, dung continue de nhap lai
        if (guess < 1 || guess > 100) {
            printf("Canh bao: Vui long chi nhap so tu 1 den 100!\n");
            continue; // Nhay ve dau vong lap, khong tang bien attempts
        }
        // Neu nhap dung pham vi, tinh la 1 lan doan
        attempts++;

        if (guess == target) {
            printf("Chuc mung! Ban da doan dung so %d o luot thu %d!\n", target, attempts);
            break; // Thang cuoc, thoat khoi vong lap ngay lap tuc
        } else if (guess < target) {
            printf("Goi y: So can tim LON hon so ban doan.");
        } else {
            printf("Goi y: So can tim NHO hon so ban doan.");
        }

        // Thong bao so luot con lai
        if (attempts < MAX_ATTEMPTS) {
            printf(" (Con %d luot)\n", MAX_ATTEMPTS - attempts);
        }
    }

    if (guess != target) {
        printf("\nGame Over! Ban da het luot. So dung la: %d\n", target);
    }
}

int main() {
    play_game();
    return 0;
}