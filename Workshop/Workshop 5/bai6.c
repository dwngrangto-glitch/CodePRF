#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char names[10][50]; // để lưu trữ dữ liệu[array][pointer]
	printf("INPUT:\n");

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // hoán đổi bằng strcpy
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
	printf("\nOUTPUT:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}