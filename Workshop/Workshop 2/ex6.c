#include <stdio.h>
int main() {
    int n;
    long long binary = 0;
    int place = 1;
    printf("Nhap so thap phan n: ");
    while (scanf("%d", &n) !=1){
    	printf("Nhap lai so thap phann: ");
    	fflush(stdin);
	}
    if (n == 0) {
        printf("So nhi phan: 0");
        return 0;
    }
    while (n > 0) {
        binary = binary + (n % 2) * place;
        place = place * 10;
        n = n / 2;
    }
    printf("So nhi phan: %lld", binary);
    return 0;
}
