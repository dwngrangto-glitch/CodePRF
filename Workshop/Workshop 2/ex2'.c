#include <stdio.h>
#include <math.h>

int main (){
	float n;
	int count = 1;
	
	while (1){
		printf("Nhap vao so thu %d:", count);	
		while(scanf("%f", &n) !=1 || n <= 0){
		printf("Nhap lai:");	
		while(getchar() != '\n');
	}
		float kqua = sqrt(n);
		printf ("Can bac 2 la: %.2f\n",kqua);
		count++;
		if(count == 6){
			break;
		}
	}
	
	printf("Da lam xong, gioi qua");
	return 0;
}
