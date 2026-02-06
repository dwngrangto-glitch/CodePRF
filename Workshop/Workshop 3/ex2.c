#include<stdio.h>
int main (){
	int n, sum = 0;
	int keepReading = 1;
	do{
		printf("nhap so nguyen:");
		scanf("%d", &n);
		if (n == 0) {
			keepReading = 0;
		}
		sum += n ;
	} while (keepReading == 1);
	printf("sum: %d\n",sum);
	
}