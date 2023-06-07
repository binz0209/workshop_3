#include <stdio.h>

int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int is_valid_date(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return 0;
    }

    int max_day;
    if (month == 2) {
        if (is_leap_year(year)) {
            max_day = 29;
        } else {
            max_day = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_day = 30;
    } else {
        max_day = 31;
    }

    if (day > max_day) {
        return 0;
    }

    return 1;
}

int main() {
    int day, month, year;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (is_valid_date(day, month, year)) {
        printf("%02d/%02d/%d hop le", day, month, year);
    } else {
        printf("%02d/%02d/%d khong hop le", day, month, year);
    }

    return 0;
}
