#include <stdio.h>

void nhiPhan(int n) {
    if (n > 0) {
        nhiPhan(n/2);
        printf("%d", n%2);
    }
}

int main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    while(n <= 0) {
        printf("Khong hop le. Nhap lai n = ");
        scanf("%d", &n);
    }
    printf("%d = ", n);
    nhiPhan(n);
    return 0;
}