#include<stdio.h>

int main(){
	printf("INPUT: \n");
	char str[1000];
	int length = 0;
	scanf("%[^\n]", str);
	
	while(str[length] != '\0'){
		length++;
	}
	printf("\nOUTPUT: \n");
	for(int i = length - 1; i >= 0; i--){ // - 1 vì đếm từ 0 - 4
		printf("%c", str[i]);
	}
}

