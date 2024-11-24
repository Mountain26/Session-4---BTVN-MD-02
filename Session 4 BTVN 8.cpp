#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Moi ban nhap vao do dai canh thu nhat: ");
    scanf("%f", &a);
    
    printf("Moi ban nhap vao do dai canh thu hai: ");
    scanf("%f", &b);
    
    printf("Moi ban nhap vao do dai canh thu ba: ");
    scanf("%f", &c);
    
    if (a + b > c && a + c > b && b + c > a){
        printf("La 3 canh tam giac");
    }else{
        printf("Khong phai 3 canh tam giac");
    }

    return 0;
}

