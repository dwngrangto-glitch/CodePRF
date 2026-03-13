#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

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


  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  
  int duyetQua[n];
  for(int i = 0; i < n; i++){
  	duyetQua[i] = 0;
  }
  
  int found = 0; // để đánh dấu cờ: 0 có nghĩa là chưa tìm thấy số chẵn nào.
  
  for(int i = 0; i < n; i++){
	if(arr[i]%2==0 && duyetQua[i]==0){
		found = 1; //đánh dấu đã timf được ít nhất 1 số chẵn
		int count = 1; // biến đếm số lần xuất hiện, ban đầu là 1 chính nó
		
		for(int j=i+1; j<n; j++){
			if(arr[j] == arr[i]){
				count++; //tăng số lần xuất hiện
				duyetQua[j] = 1; // đánh dấu vị trí j đã được đếm, lần sau nó bỏ qua k đếm chôx này nữa.
			}
		}
		printf("%d-%d\n", count, arr[i]);
		}
	}
	if(found == 0){
		printf("Not found\n");
	}
  

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
