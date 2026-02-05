#include <stdio.h>
int main() {
	int secret = 18;
	int guess;
	printf("======TRO CHOI LO TO DOAN SO======\n");
	printf("Doan so trong khoang tu 1 den 100\n");
	while(1){
		printf("Nhap so ban doan: ");
		while(scanf("%d", &guess) !=1){
			printf("Chi nhap so thoi\nNhap lai so ban doan di b iu: ");
			fflush(stdin);
		}
		if (guess<1||guess>100){
			printf("So khong dung, so ban doan phai tu 1 den 100\n");
			continue; //quay lại vòng lặp không so sánh
		}
		//so sánh với số bí mật của mình
		if (guess<secret){
			printf("So ban doan nho hon so BI MAT roiii!\n");
		} else if (guess>secret){
			printf("So ban doan lon hon so BI MAT roiiii!\n");
		} 
		else {
			printf("Dinh qua b oi! Ban da doan dung roi!\n");
			break;
		}
	}
    return 0;
}
