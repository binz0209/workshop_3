#include <stdio.h>

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Giai thua cua %d la: %.0lf\n", n, factorial(n));
    return 0;
}
