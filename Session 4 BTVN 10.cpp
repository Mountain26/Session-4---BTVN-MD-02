#include <stdio.h>

int main() {
    int a, b, c;

    printf("Moi ban nhap vao so thu nhat: ");
    scanf("%d", &a);
    printf("Moi ban nhap vao so thu hai: ");
    scanf("%d", &b);
    printf("Moi ban nhap vao so thu ba: ");
    scanf("%d", &c);
    
    if (a <= b && b <= c) {
        printf("Cac so theo thu tu tu nho den lon la: %d %d %d\n", a, b, c);
    } else if (a <= c && c <= b) {
        printf("Cac so theo thu tu tu nho den lon la: %d %d %d\n", a, c, b);
    } else if (b <= a && a <= c) {
        printf("Cac so theo thu tu tu nho den lon la: %d %d %d\n", b, a, c);
    } else if (b <= c && c <= a) {
        printf("Cac so theo thu tu tu nho den lon la: %d %d %d\n", b, c, a);
    } else if (c <= a && a <= b) {
        printf("Cac so theo thu tu tu nho den lon la: %d %d %d\n", c, a, b);
    } else {
        printf("Cac so theo thu tu tu nho den lon la: %d %d %d\n", c, b, a);
    }
    
    return 0;
}

