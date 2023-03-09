#include <stdio.h>

int input() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    while(n < 1) {
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }
    return n;
}

int output(int n) {
    int tich = 1;
    if (n == 0)
        return 1;

    return n * output(n - 1);
}