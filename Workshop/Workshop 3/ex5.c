#include <stdio.h>
void show_menu(){
	printf("====MAY TINH BO TUI====\n");
	printf("1. Phep cong.\n");
	printf("2. Phep tru.\n");
	printf("3. Phep nhan.\n");
	printf("4. Phep chia.\n");
	printf("0. Dung chuong trinh.\n");
	printf("=======================\n");
	printf("Chon phep tinh: ");
}

void processor(){
	int choice;
	float num1, num2, kq;
	
	do {
		show_menu();
		scanf("%d", &choice);
	switch(choice){
		case 1: case 2: case 3: case 4:
			printf("Nhap vao so thu nhat: "); scanf("%f", &num1);
			printf("Nhap vao so thu hai: "); scanf("%f", &num2);
		if(choice == 1){
			kq = num1 + num2;
			printf("%.0f + %.0f = %.0f\n", num1, num2, kq);
		} else if (choice == 2){
			kq = num1 - num2;
			printf("%.0f - %.0f = %.0f\n", num1, num2, kq);
		} else if (choice == 3){
			kq = num1 * num2;
			printf("%.0f * %.0f = %.0f\n", num1, num2, kq);
		} else if(choice == 4){
			if(num2 != 0){	
			kq = num1 / num2;
			printf("%.0f / %.0f = %.0f\n", num1, num2, kq);
		} else {
			printf("Khong the chia cho 0\n");
			}
		}
			break;
			
		case 0:
			printf("Da thoat chuong trinh.\n");
			break;
	default:
		printf("Lua chon khong hop le!\n\n");
		}
	
	} while (choice != 0);
}

int main(){
	processor();
	return 0;
}