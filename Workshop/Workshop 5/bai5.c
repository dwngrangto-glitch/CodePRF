#include<stdio.h>
int main(){
	char s[300];
	char tim;
	char thayThe;
	int i, count = 0;
	
	printf("INPUT:\n");
	scanf("%s", s);
	scanf(" %c", &tim);
	scanf(" %c", &thayThe);
	
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] == tim){
			s[i] = thayThe;
			count++;
		}
	}
	printf("\nOUTPUT:\n");
	printf("%d\n", count);
	printf("%s\n", s);
	return 0;
}