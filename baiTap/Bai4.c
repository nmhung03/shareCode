#include <stdio.h>

float lai_kep(float y, int n) {
    if (n == 0) 
        return y;
    return lai_kep(y, n-1) + 0.13*lai_kep(y, n-1);
}

int main() {
    int n, y;
    printf("Nhap nam = ");
    scanf("%d", &n);
    while(n <= 0) {
        printf("Nhap lai nam = ");
        scanf("%d", &n);
    }
    printf("Nhap so von = ");
    scanf("%d", &y);
    printf("P(%d) = %f", n, lai_kep(y, n));

    return 0;
}