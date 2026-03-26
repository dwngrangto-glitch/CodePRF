// tạo file text "baitap1.txt" ghi 1 số vào file này.
#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("baitap1.txt", "r");
	//Kiểm tra thành công
	if(fp==NULL){
		printf("Enrror");
		return 0;
	}
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	fprintf(fp,"Gia tri n: %d", n);
}