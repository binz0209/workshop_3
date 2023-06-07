#include <stdio.h> 
#include <math.h>

int prime(int n) {
	int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(prime(n)) {
        printf("%d la so nguyen to", n);
    } else printf("%d khong la so nguyen to", n);
}