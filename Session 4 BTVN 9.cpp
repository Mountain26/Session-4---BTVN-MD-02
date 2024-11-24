#include <stdio.h>
int main() {
	
    int day, month, year,soNgay;
    
    printf("Moi ban nhap vao ngay: ");
    scanf("%d", &day);
    
    printf("Moi ban nhap vao ngay vao thang: ");
    scanf("%d", &month);
    
    printf("Moi ban nhap vao ngay vao nam: ");
    scanf("%d", &year);
    
   if(year<1){
		printf("Nam khong hop le");
	}else if(month<1 || month>12){
		printf("Thang khong hop le");
	}else{
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				soNgay = 31;
			break;
			case 4: case 6: case 9: case 11:
				soNgay = 30;
			break;
			case 2:
				if((year%4==0 && year%100!=0) || (year%400==0)){
					soNgay = 29;
				}else{
					soNgay = 28;
				}
			break;
		}
	}
	
	if(day<1 || day>soNgay){
		printf("%d/%d/%d khong hop le",day,month,year);
	}else{
		printf("%d/%d/%d hop le",day,month,year);
	}
	
	return 0;
}
