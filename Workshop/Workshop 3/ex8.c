#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void play_game() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int MAX_ATTEMPTS = 7;

    printf("\n--- CHAO MUNG DEN VOI GAME DOAN SO ---");
    printf("\nMay da chon mot so tu 1 den 100. Ban co %d luot doan.\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS) {
        printf("\nLuot thu %d. Nhap so ban doan: ", attempts + 1);

        // 1. Kiem tra neu nguoi dung nhap chu cai
        if (scanf("%d", &guess) != 1) {
            printf("Loi: Vui long chi nhap so nguyen!\n");
            while (getchar() != '\n'); // Xoa ky tu chu trong bo nho dem
            continue; 
        }

        // 2. Kiem tra neu nhap so am hoac ngoai pham vi [1, 100]
        if (guess < 1 || guess > 100) {
            printf("Canh bao: So phai nam trong khoang 1 den 100!\n");
            continue; 
        }

        // Neu nhap dung dinh dang va pham vi, moi tinh la 1 lan doan
        attempts++;

        if (guess == target) {
            printf("Chuc mung! Ban da doan dung so %d o luot thu %d!\n", target, attempts);
            break; 
        } else if (guess < target) {
            printf("Goi y: So can tim LON hon.");
        } else {
            printf("Goi y: So can tim NHO hon.");
        }

        if (attempts < MAX_ATTEMPTS) {
            printf(" (Con %d luot)\n", MAX_ATTEMPTS - attempts);
        }
    }

    if (guess != target) {
        printf("\n\nGame Over! Ban da het luot. So dung la: %d\n", target);
    }
}

int main() {
    play_game();
    return 0;
}