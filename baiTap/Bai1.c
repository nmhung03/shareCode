#include <stdio.h>

long tong(int n) {
    if (n == 0)
        return 0;
    return n + tong(n - 1);
}

long tich(int n) {
    if (n == 1)
        return 1;
    return n * tich(n - 1);
}

float luyThua(float a, int n) {
    if (n == 0) 
        return 1;
    return a * luyThua(a, n - 1);
}


int main() {
    float a;
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap a = ");
    scanf("%f", &a);

    while(n < 0) {
        printf("Du lieu khong hop le. Nhap lai n = ");
        scanf("%d", &n);
    }
    
    printf("S(%d) = %d", n, tong(n));
    printf("\nP(%d) = %d", n, tich(n));
    printf("\nA(%.2f, %d) = %.2f", a, n, luyThua(a, n));

    return 0;
}