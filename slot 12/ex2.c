#include <stdio.h>
int timSoLonNhat(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int soMax = timSoLonNhat(x, y, z);
    printf("So lon nhat trong 3 so la: %d\n", soMax);
    return 0;
}