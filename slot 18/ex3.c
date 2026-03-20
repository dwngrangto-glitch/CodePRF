#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Dinh nghia cau truc Book bang typedef
typedef struct {
    int id;
    char name[100];
    float price;
} Book;

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n); // Nhap so luong sach n
  
  Book b[100];
  for(int i = 0; i < n; i++) {
      scanf("%d", &b[i].id);
      getchar(); // Doc bo ky tu xuong dong sau khi nhap id
      fgets(b[i].name, sizeof(b[i].name), stdin);
      b[i].name[strcspn(b[i].name, "\n")] = 0; // Xoa ky tu \n
      scanf("%f", &b[i].price);
  }

  int findId;
  scanf("%d", &findId); // Nhap ID can tim theo yeu cau tren bang
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  // 1. Tim sach co id
  int foundIndex = -1;
  for(int i = 0; i < n; i++) {
      if(b[i].id == findId) {
          foundIndex = i;
          break;
      }
  }

  if(foundIndex == -1) {
      printf("Not Found\n");
  } else {
      printf("%d\n", foundIndex); // In ra index neu tim thay
  }

  // 2. Tim price Max
  float maxPrice = b[0].price;
  int maxPos = 0;
  for(int i = 1; i < n; i++) {
      if(b[i].price > maxPrice) {
          maxPrice = b[i].price;
          maxPos = i;
      }
  }
  printf("%s", b[maxPos].name); // In ra ten sach co gia cao nhat
 
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}