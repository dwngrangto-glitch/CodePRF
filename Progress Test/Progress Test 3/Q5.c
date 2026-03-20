#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//dùng hàm để in ra SỐ CHẴN trong hàm, k có in ra dòng đó.
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n) {
    //@STUDENT: WRITE YOUR CODE HERE:
    int maxEven;
    int found = 0; // Biến đánh dấu để biết đã tìm thấy số chẵn nào chưa

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            // Nếu là số chẵn đầu tiên tìm thấy hoặc lớn hơn số chẵn lớn nhất hiện tại
            if (found == 0 || arr[i] > maxEven) {
                maxEven = arr[i];
                found = 1;
            }
        }
    }

    if (found == 1) {
        return maxEven;
    } else {
        // Trả về một giá trị đặc biệt (ví dụ: số lẻ) để báo không tìm thấy
        return 1; 
    }
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n;
  scanf("%d", &n);
  
  int a[n];
  for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int result = findLargestEvenNumber(a, n);
  
  if (result % 2 == 0) {
      printf("%d\n", result);
  } else {
      printf("There are no even numbers in %d elements.\n", n);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}