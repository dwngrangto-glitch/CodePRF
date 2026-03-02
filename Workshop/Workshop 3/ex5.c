#include<stdio.h>
float calculate_salary(float hours, float rate){
	float salary;
	if(hours <= 40){
		salary = hours*rate;
	} else {
		float overtime = hours - 40;
		salary = 40*rate + (overtime*1.5*rate);
	}	
	return salary;
}
int main(){
	float hours, rate;
	printf("Nhap so gio lam viec: ");
	while(scanf("%f", &hours) != 1 || hours <= 0){
		printf("So gio khong hop le!\nNhap lai so gio: ");
		while(getchar() != '\n');
	}
	printf("Nhap muc luong: ");
	while(scanf("%f", &rate) != 1 || rate <= 0){
		printf("Muc luong khong hop le!\nNhap lai muc luong: ");
		while(getchar() != '\n');
	}
	float tongLuong = calculate_salary(hours, rate);
	printf("Luong cua cong nhan sau %.0f h la: %.0f VND", hours, tongLuong);
	return 0;
}