#include <stdio.h>
int main() {
    char kt = 'A';
    printf("%-10s | %-10s | %-10s | %-10s | %-10s | %-10s\n", 
           "Ten bien", "Gia tri", "Dec", "Hex", "Octal", "Size");
    printf("----------------------------------------------------------------------------\n");
    printf("%-10s | %-10c | %-10d | %-10x | %-10o | %-10d\n", 
           "kt", kt, kt, kt, kt, sizeof(kt));
    return 0;
}