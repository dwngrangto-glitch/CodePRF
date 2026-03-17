#include<stdio.h>
#include<string.h>
int main(){
	printf("INPUT:\n");
	char str[1000];
	int count = 0;
	if(scanf("%[^\n]", str) != 1){
		printf("\nOUTPUT:\n");
		printf("0");
		return 0;
	}
	printf("\nOUTPUT:\n");
	while(str[count] != '\0'){
		count++;
	}
	printf("%d", count);
}