#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//nhập vào số lượng, nhập dãy số, lấy max - min.
int findDifference(int arr[], int n) {
//@STUDENT:ADD YOUR CODE
	int max = arr[0];
	int min = arr[0];
	
	for(int i = 1; i < n; i++){ // vì đã lấy arr[0] min max ra làm mốc ss rồi nên chạy từ 1 - < n thôi
		if(arr[i] > max) max = arr[i]; // cập nhật max nếu tìm ra
		if(arr[i] < min) min = arr[i];
	}
	return max - min;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++){
  	scanf("%d", &arr[i]);
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int result = findDifference(arr, n);
  printf("%d\n", result);
  
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
