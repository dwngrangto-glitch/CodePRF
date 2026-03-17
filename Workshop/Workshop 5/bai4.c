#include <stdio.h>
int main(){
	char c[200];
	int i;
	int count = 0;
	
	printf("INPUT:\n");
	gets(c);
	
	for(i = 0; c[i] != '\0'; i++){
		if(c[i] != ' ' && (i == 0 || c[i-1]==' ')){
			count++;
		}
	}
	printf("\nOUTPUT:\n");
	printf("%d", count);
	return 0;
}