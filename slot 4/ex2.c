//khai báo 3 biến ngày tháng năm và nhập vào với kiểu ngay/thang/nam và in ra kiểu VD: 12/1/2026
#include <stdio.h>
int main() {
    int ngay, thang, nam;
    scanf("%d/%d/%d", &ngay, &thang, &nam);
    printf("%02d/%02d/%d\n", ngay, thang, nam);
    return 0;
}