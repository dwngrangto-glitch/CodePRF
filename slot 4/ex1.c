#include <stdio.h>
int main (){
	int a, b;
	printf("nhap a, b: ");
	int kq = scanf("%d%d", &a,&b);
	if (kq>0) {
		printf("kq ham scanf: %d\n", kq);
		printf("a = %d, b = %d\n", a,b);
 	}
	else
		printf("nhap sai roi!");
		printf("Bai tap nhap voi scanf");
	return 0;
}
