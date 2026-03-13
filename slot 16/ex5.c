#include<stdio.h>
void swap(int*a, int*b, int*c){
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}
int main(){
	int num1, num2, num3;
	printf("Nhap vao 3 so nguyen: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	//đây là trước khi hoán đổi
	printf("\nNum1 = %d, Num2 = %d, Num3 = %d\n", num1, num2, num3);
	swap(&num1, &num2, &num3);
	//đây là sau khi hoán đổi
	printf("\nNum1 = %d, Num2 = %d, Num3 = %d\n", num1, num2, num3);
	return 0;
}