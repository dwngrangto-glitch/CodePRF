#include <stdio.h>
int main(){
	int n;
	while(1){
		printf("Nhap vao n: ");
		while(scanf("%d", &n) !=1){
			printf("Nhap vao lai n: ");
			fflush(stdin);
		}
		
	}
	
	return 0;
}