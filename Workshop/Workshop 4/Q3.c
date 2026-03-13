#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  // system("cls"); 
  printf("INPUT:\n");

  int n;
  int check = scanf("%d", &n);
  
  // Dùng mảng kích thước cố định để tránh lỗi tràn bộ nhớ khi n bị nhập sai
  int arr[1000]; 

  // Chỉ thực hiện nhập mảng và sắp xếp nếu hệ thống nhập n đúng (check == 1) và n > 0
  if (check == 1 && n > 0) {
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    // Thuật toán sắp xếp giảm dần
    for(int i = 0; i < n - 1; i++) {
      for(int j = i + 1; j < n; j++) {
        if(arr[i] < arr[j]) { 
          int temp = arr[i];  
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }
  }
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  
  // Nếu n nhập vào <= 0 hoặc không phải là số (check != 1)
  if(check != 1 || n <= 0) { 
  	printf("Invalid input\n");
  } else {
  	for(int i = 0; i < n; i++) {
  		if(arr[i] % 2 == 0) {
  			printf("%d\n", arr[i]);
		  }
	  }
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  // system ("pause"); 
  return(0);
}