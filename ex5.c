#include <stdio.h> 

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;
    printf("Nhap so phan tu cua day fibonacci: ");
    scanf("%d", &n);

    printf("Day fibonnaci cua %d phan tu dau tien la: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
}
