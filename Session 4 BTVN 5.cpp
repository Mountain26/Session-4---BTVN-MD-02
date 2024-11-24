#include <stdio.h>

int main() {
    int num1;
    printf("Moi ban nhap vao so thu nhat ma ban muon: ");
    scanf("%d", &num1);

    int num2;
    printf("Moi ban nhap vao so thu hai ma ban muon: ");
    scanf("%d", &num2);

    int num3;
    printf("Moi ban nhap vao so thu ba ma ban muon: ");
    scanf("%d", &num3);

    if(num1 < num3 && num2 > num3){
        printf("%d nam giua %d va %d\n", num3, num1, num2);
    }else if(num2 < num3 && num1 > num3){
    	printf("%d nam giua %d va %d\n", num3, num1, num2);
	}else{
		printf("%d khong nam giua %d va %d\n", num3, num1, num2);
	} 
    return 0;
}

