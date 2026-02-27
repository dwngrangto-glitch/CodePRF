#include <stdio.h>
void inMaASCII() {
    for(char c = 'A'; c <= 'Z'; c++) {
        
        printf("%c: %d  ", c, c);
        if((c - 'A' + 1) % 5 == 0) printf("\n");
    }
}
int main() {
    printf("Bang ma ASCII tu A-Z:\n");
    inMaASCII();
    return 0;
}