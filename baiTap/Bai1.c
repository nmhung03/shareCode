#include <stdio.h>

int tong(int n) {
    if (n == 0)
        return 0;
    return n + tong(n - 1);
}

int tich(int n) {
    if (n == 1)
        return 1;
    return n * tich(n - 1);
}

double luyThua(double a, int n) {
    if (n == 0) 
        return 1;
    return a * luyThua(a, n - 1);
}

int main() {
    double a;
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap a = ");
    scanf("%lf", &a);

    while(n < 0) {
        printf("Du lieu khong hop le. Nhap lai n = ");
        scanf("%d", &n);
    }
    
    printf("S(%d) = %d", n, tong(n));
    printf("\nP(%d) = %d", n, tich(n));
    printf("\nA(%.0lf, %d) = %.0lf", a, n, luyThua(a, n));

    return 0;
}