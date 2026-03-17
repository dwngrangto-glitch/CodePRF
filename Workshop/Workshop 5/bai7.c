#include <stdio.h>
#include <ctype.h> // dùng isdigit, isalpha

int main() {
	printf("INPUT:\n");
    char str[100];
    int digits = 0, letters = 0, others = 0;

    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == '\n') {
        str[i] = '\0';
        break;
    }
}

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            digits++;
        } else if (isalpha(str[i])) {
            letters++;
        } else {
            others++;
        }
    }
	printf("\nOUTPUT:\n");
    printf("%d\n", digits);
    printf("%d\n", letters);
    printf("%d\n", others);

    return 0;
}