#include <stdio.h>
int main() {
	int a, b, r; //r là biến lưu số dư
	printf("Nhap vao a va b nha: ");
	while(scanf("%d %d", &a, &b) !=2){
		printf("Nhap lai a va b cho dung: ");
		fflush(stdin); // xóa bộ nhớ đệm bàn phím hoi
	}
	if (a<0) {
		a=-a;
	}
	if (b<0) {
		b=-b; //dam bao a,b không âm
	}
	while (b!=0){
		r = a%b;
		a=b;
		b=r;
	}
	printf("UCLN = %d", a);
	
    return 0;
}
