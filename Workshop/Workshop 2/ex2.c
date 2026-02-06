#include <stdio.h>
#include <math.h>
int main() {
    float n;
    int count = 1;
    while(1){
    	printf("Nhap vao so thu %d: ", count);
    	while(scanf("%f", &n) !=1||n<=0){
    		printf("Nhap lai: ");
    		fflush(stdin);
		}
		float kqua = sqrt(n);
		printf("Can bac 2 la: %.2f\n", kqua);
		count++;
		if (count==6){
			break;
		}
	}
    printf("Da xong xuat sac");
    return 0;
}
