#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int posMax = -1, posMin = -1;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			if(posMax == -1){
				posMax = i;
				posMin = i;
			} else {
				if(arr[i] > arr[posMax]) posMax = i;
				if(arr[i] < arr[posMin]) posMin = i; // tìm vị trí số chẵn, số lẻ
			}
		}
	}
	if(posMax != -1 && posMin != -1){
		int temp = arr[posMax];
		arr[posMax] = arr[posMin];
		arr[posMin] = temp;
	}
	

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(int i = 0; i < n; i++){
  	printf("%d ", arr[i]);
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
