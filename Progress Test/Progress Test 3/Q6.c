#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void replaceCharacter(char str[], char oldChar, char newChar) {
//@STUDENT:ADD YOUR CODE
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == oldChar){ //nếu ký tự tại i trùng với ký tự cần thay thế
			str[i] = newChar; // thay thế thành kí tự mới
		}
	}

}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  char str[100];
  char oldChar, newChar;
  
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  
  str[strcspn(str, "\n")] = 0;
  printf("Enter the character to replace: ");
  scanf(" %c", &oldChar);
  
  printf("Enter the replacement character: ");
  scanf(" %c", &newChar);
  
  replaceCharacter(str, oldChar, newChar);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("Modified string: %s\n", str);
  
  

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
