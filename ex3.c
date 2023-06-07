#include <stdio.h>
#include <math.h>

int check_pos(double x, double y, double r) {
    double r2_circle = r*r;
    double r2_point = x*x + y*y;
    if (r2_circle == r2_point) {
        return 0;
    } else if (r2_circle > r2_point) {
        return 1;
    } else return -1;
}

int main() {
    double x, y, r;
    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap y: ");
    scanf("%lf", &y);
    printf("Nhap ban kinh cua duong tron: ");
    scanf("%lf", &r);
    
    int pos = check_pos(x, y, r);

    if(pos == 0) {
        printf("Diem (%.2lf, %.2lf) nam tren duong tron ban kinh %.2lf", x, y, r);
    } else if (pos == 1) {
        printf("Diem (%.2lf, %.2lf) nam trong duong tron ban kinh %.2lf", x, y, r);
    } else  printf("Diem (%.2lf, %.2lf) nam ngoai duong tron ban kinh %.2lf", x, y, r);
}