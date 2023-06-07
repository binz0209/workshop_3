#include <stdio.h>

double makeDouble(int ipart, int fraction) {
    double d_f = fraction;
    while (d_f >= 1) {
        d_f = d_f / 10;
    }
    if (ipart < 0) {
        return ipart - d_f;
    }
    return ipart + d_f;
}

int main() {
    int ipart, fraction;
    double value;
    
    printf("Nhap phan nguyen: ");
    scanf("%d", &ipart);
    
    do {
        printf("Nhap phan thap phan (phai la so duong): ");
        scanf("%d", &fraction);
    } while (fraction < 0);
    
    value = makeDouble(ipart, fraction);
    printf("So thuc la: %lf\n", value);
    
    return 0;
}