#include <stdio.h>
int main (){
	int n;
	printf("Nhap vao n: ");
	while (scanf("%d", &n) !=1) {
		printf("Nhap lai n: ");
		fflush(stdin);
	}
		int soDao = 1;
		soDao = 0;
		while(n > 0){
			soDao = soDao*10+(n%10);
			n = n/10;
		}
		printf("So dao nguoc la: %d", soDao);
}