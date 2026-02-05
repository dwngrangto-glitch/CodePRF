#include <stdio.h>
int main() {
	int n;
	int i = 0;
	int check = 0;
	printf("Nhap so n: ");
	while(scanf("%d", &n) !=1){
		printf("Nhap lai so n: ");
		fflush(stdin);
	}
	if (n<0){
		printf("%d khong phai la so chinh phuong", n);
		return 0;
	}
	while (i*i<=n){
		if (i*i==n){
			check = 1;
			break;
		}
		i++;
	}
	if (check == 1){
		printf("%d la so chinh phuong", n);
	} else {
		printf("%d khong phai la so chinh phuong nha b", n);
	}
    return 0;
}
