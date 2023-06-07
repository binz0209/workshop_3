#include <stdio.h>

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen khong am: ");
    scanf("%d", &n);
    while (n >= 0) {
        printf("Tong cac chu so thap phan cua %d la: %d\n", n, sum_digits(n));
        printf("Nhap vao mot so nguyen khong am: ");
        scanf("%d", &n);
    }
    printf("Da nhap so am, chuong trinh ket thuc");
    return 0;
}