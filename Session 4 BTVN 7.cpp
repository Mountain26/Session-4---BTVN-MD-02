#include <stdio.h>

int main(){
    int namNhuan;
    printf("Moi ban nhap vao nam ban muon kiem tra: ");
    scanf("%d", &namNhuan);
    
    if ((namNhuan % 4 == 0 && namNhuan % 100 != 0) || (namNhuan % 400 == 0)) {
        printf("%d la nam nhuan.\n", namNhuan);
    } else {
        printf("%d khong phai la nam nhuan.\n", namNhuan);
    }
}
