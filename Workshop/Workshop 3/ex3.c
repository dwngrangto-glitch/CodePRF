#include<stdio.h>
float calculate_taxi_fare(float distance){
	float giaTien = 0;
	if(distance<=0){
		giaTien = 0;
	} else if (distance <= 1){
		giaTien = 15000;
	} else if (distance <= 30){
		giaTien = 15000 + (distance - 1)*12000;
	} else {
		giaTien = 15000 + 29*12000 + (distance - 30)*10000;
	}
	return giaTien;
}
int main(){
	float distance;
	printf("Nhap vao so km: ");
	while(scanf("%f", &distance) != 1){
		printf("So km khong hop le\nNhap lai: ");
		fflush(stdin);
	}
	float tongTien = calculate_taxi_fare(distance);
	printf("So tien cua %.0f km la: %.0f VND", distance, tongTien);
	return 0;
}