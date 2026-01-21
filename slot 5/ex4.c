#include <stdio.h>
int main(){
	int soTien;
	int soKwH;
	printf("Nhap so KwH: ");
	scanf("%d", &soKwH);
	if (soKwH < 100) {
		soTien = soKwH * 950;
	} else 
		if (soKwH <= 150 && soKwH > 100){
		soTien = soKwH * 1250;
	} else 
		if (soKwH <= 200 && soKwH > 150){
		soTien = soKwH * 1350;
	} else 
		soTien = soKwH * 1550;
	printf("So tien dien la: %d", soTien);
	return 0;
}