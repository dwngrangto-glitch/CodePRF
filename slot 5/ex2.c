#include <stdio.h>
int main (){
	float a, b, c;
	float max;
	printf("Nhap ba so: ");
	scanf("%f %f %f", &a, &b, &c);
		max = a;
		if (max < b)
				max = b;
		if (max < c) 
				max = c;
	printf("So lon nhat la: %.2f", max);
}