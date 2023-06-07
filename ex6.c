#include <stdio.h>

int is_fibonacci(int n) {
    int temp1 = 1, temp2 = 1, i = 1;
    if (n == 1)
        return 1;
    while (i < n) {
        i = temp1 + temp2;
        temp1 = temp2;
        temp2 = i;
    }
    return n == i;
}

int main() {
    int n;
    printf("Nhap mot so de kiem tra: ");
    scanf("%d", &n);

    if (is_fibonacci(n)) {
        printf("%d la so fibonacci", n);
    } else printf("%d khong phai la so fibonacci", n);
}