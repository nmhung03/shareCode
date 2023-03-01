#include <stdio.h>

int capSoCong(int n, int a, int r) {
    if (n == 1)
        return a;
    return r + capSoCong(n - 1, a, r);
}

int capSoNhan(int n, int a, int q) {
    if (n == 1)
        return a;
    if (n >= 2)
        return q * capSoNhan(n - 1, a, q);
}

int main() {
    int n, r, q, a;
    printf("Nhap so hang dau a = ");
    scanf("%d", &a);

    printf("Nhap cong sai r = ");
    scanf("%d", &r);

    printf("Nhap cong boi q = ");
    scanf("%d", &q);

    printf("Nhap n = ");
    scanf("%d", &n);

    while(n <= 0) {
        printf("n khong hop le. Nhap lai n = ");
        scanf("%d", &n);
    }
    printf("Cap so cong: ");
    int i = 1;
    for (i = 1; i <= n; i++) {
        printf("%d ", capSoCong(i, a, r));
    }

    printf("\nCap so nhan: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", capSoNhan(i, a, q));
    }
    return 0;
}