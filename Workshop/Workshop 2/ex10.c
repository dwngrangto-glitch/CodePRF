#include <stdio.h>
int main (){
	long long Sodu = 10000000;
	int luachon;
	long long sotien;
	
	while (1) {
		printf("\n=====ATM=====\n");
		printf("So du: %lld\n", Sodu);
		printf("1.Rut tien\n");
		printf("0.Thoat\n");
			if (scanf("%d", &luachon) !=1){
				printf("Vui long chi nhap so!\nNhap lai: ");
					fflush(stdin);
					continue;
			}
			if (luachon == 0) {
				printf("Xin chao va hen gap lai!");
				break;
			}
			if (luachon == 1) {
				printf("Nhap so tien muon rut: ");
				if (scanf("%d", &sotien) !=1 || sotien <= 0){
					printf("So tien khong hop le!");
					fflush(stdin);
					continue;
				}
				if (sotien > Sodu){
					printf("So du khong du!\n");
					break;
				}
			Sodu -= sotien;
			printf("Rut thanh cong!\nSo du hien tai la: %lld", Sodu);
			if (Sodu == 0){
				printf("\nHet tien roi!\nCan nap them!");
				break;
			}
		}
			else {
				printf("Lua chon khong hop le nha!");
			}
	}
	return 0;
}