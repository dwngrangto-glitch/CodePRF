#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  
  int n;
  scanf("%d", &n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  float sum = 0;
  float giaiThua = 1;
  if (n<=0){
  	printf("Error: n must be greater than 0.");
  	return 0;
  }
  for(int i = 1; i <= n; i++){
  	giaiThua = giaiThua*i;
  	sum = sum + 1.0/giaiThua;
  }
  printf("%.3f", sum);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
