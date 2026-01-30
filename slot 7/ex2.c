
#include<stdio.h>
int main()
{
    int a, b;
    float kq;
    char phepToan;
    scanf("%d,%d",&a,&b); //Viet them code de kiem tra nhap dung...
    fflush(stdin); //Xoa vung dem
    scanf("%c",&phepToan);
    int soDu;
    switch(phepToan){
        case '+':
            kq = a + b;
            break;
        case '-':
            kq = a - b;
            break;
        case '*':
            kq = a * b;
            break;
        case '%':
            if(b==0)
            {
                printf("Khong the chia cho 0!");
                return 0; //thoat chuong trinh
            }
            soDu = a % b;
            printf("%d %c %d = %d",a,phepToan,b, soDu);
            return 0;
        case '/':
            if(b==0)
            {
                printf("Khong the chia cho 0!");
                return 0; //thoat chuong trinh
            }

            kq = (float)a/b;
            printf("%d %c %d = %.2f",a,phepToan,b,kq);
            return 0;

    }
    printf("%d %c %d = %.0f",a,phepToan,b,kq); //In cho 3 truong hop +,-, *
}