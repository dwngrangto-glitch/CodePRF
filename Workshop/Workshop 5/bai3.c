#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i, n;
	int doiXung = 1; //đánh dấu là đối xứng
	printf("INPUT:\n");
	scanf("%s", s);
	
	n = strlen(s);
	
	for(i = 0; i < n/2; i++){
		if(s[i] != s[n-1-i]){
			doiXung = 0;
			break;
		}
	}
	printf("\nOUTPUT:\n");
	if(doiXung == 1){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}