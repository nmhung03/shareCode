#include <stdio.h>
#include <stdlib.h>

void input(int Q[], int &n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        Q[i] = (int)(rand() * (10 - 1 + 1.0)/(1.0 + RAND_MAX));
    }
}

void output(int Q[], int n) {
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d ", Q[i]);
    }
}

long sum_rec(int Q[], int n) {
    if (n == 0)
        return 0;
    else if (n > 0) {
        return Q[n-1] + sum_rec(Q, n-1);
    }
}

int max_rec(int Q[], int n) {
    if (n == 1)
        return Q[0];
    else if (n == 0)
        return 0;
    else {
        return Q[n-1]>max_rec(Q, n - 1)?Q[n-1]:max_rec(Q, n - 1);
    }
}

long sum(int Q[], int n) {
    int i = 0, sum = 0;
    for (i = 0; i < n; i++) {
        sum += Q[i];
    }

    return sum;
}

int main() {
    int Q[100];
    int n = 10;
    input(Q, n);
    printf("In mang: ");
    output(Q, n);
    printf("\nTong cac phan tu trong mang = %d", sum_rec(Q, n));
    printf("\nPhan tu lon nhat trong mang = %d", max_rec(Q, n));
    printf("\nTong cac phan tu trong mang (sum) = %d", sum(Q, n));

    return 0;
}