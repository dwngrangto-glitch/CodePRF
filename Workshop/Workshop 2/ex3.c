#include <stdio.h>
#include <math.h>
int main (){
	int n;
	printf("Nhap bang cuu chuong so: ");
	while(scanf("%d", &n) !=1|| n<1||n>10){
		printf("Nhap lai bang cuu chuong so: ");
		fflush(stdin);
	}
		int dem = 1;
		while(dem<=n){
			printf(" %d", dem);
			dem++;
		}
		printf("\n");
		dem = 1;
		while(dem<=10){
			printf("%d * %d = %d\n", n, dem, n*dem);
			dem++;
	}
	return 0;
}