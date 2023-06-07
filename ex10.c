#include <stdio.h>

void print_min_max_digits(int num) {
    int digit;
    int min = 9, max = 0;

    while (num > 0) {
        digit = num % 10;
        if (digit < min) {
            min = digit;
        }
        if (digit > max) {
            max = digit;
        }
        num /= 10;
    }

    printf("Minimum digit: %d\n", min);
    printf("Maximum digit: %d\n", max);
}

int main() {
    int num;
    do {
        printf("Nhap so nguyen khong am: ");
        scanf("%d", &num);
    } while (num < 0);

    print_min_max_digits(num);

    return 0;
}