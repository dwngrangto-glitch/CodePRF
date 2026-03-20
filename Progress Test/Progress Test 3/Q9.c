#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Viết hoa 2 chữ cái đầu tiên của string.

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[100];
	fgets(str, sizeof(str), stdin);//dùng fgets để xóa chuỗi có dấu cách.
	str[strcspn(str, "\n")] = 0; // xóa ký tự xuống dòng
	int n = strlen(str);
	
	for(int i = 0; i < n; i++){
		if (!isspace(str[i]) && (i == 0 || isspace(str[i-1]))){
			str[i] = toupper(str[i]); // toupper là hàm tiện ích để khai báo chữ thường thành hoa
			if(i+1<n && str[i+1] != ' '){
				str[i + 1] = toupper(str[i + 1]);
			}
		}
	}

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s\n", str);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
