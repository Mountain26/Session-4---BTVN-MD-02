#include <stdio.h>
int main() {
	
    int day, month, year;
    
    printf("Moi ban nhap vao ngay: ");
    scanf("%d", &day);
    
    printf("Moi ban nhap vao ngay vao thang: ");
    scanf("%d", &month);
    
    printf("Moi ban nhap vao ngay vao nam: ");
    scanf("%d", &year);
    
    if (1 <= day && day <= 31 && month >= 1 && month <= 12) {
        printf("Ngay thang nam hop le.\n");
    } else {
        printf("Ngay thang nam khong hop le.\n");
    }

    return 0;
}

