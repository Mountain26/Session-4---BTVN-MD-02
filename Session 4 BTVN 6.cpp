#include <stdio.h>

int main(){
    int startMonth;
    printf("Moi ban nhap vao so dien dau thang: ");
    scanf("%d", &startMonth);

    int endMonth;
    printf("Moi ban nhap vao so dien cuoi thang: ");
    scanf("%d", &endMonth);
    
    int soDien;
    soDien = endMonth - startMonth;
    int tienDien;
    
    if (0 <= soDien && soDien < 50){
    	tienDien = soDien * 10000;
    	printf("Tien dien ban tieu thu trong thang nay la: %d", tienDien);
	}else if (50 <= soDien && soDien < 100){
		tienDien = soDien * 15000;
		printf("Tien dien ban tieu thu trong thang nay la: %d", tienDien);
	}else if (100 <= soDien && soDien < 150){
		tienDien = soDien * 20000;
		printf("Tien dien ban tieu thu trong thang nay la: %d", tienDien);
	}else if (150 <= soDien && soDien < 200){
		tienDien = soDien * 25000;
		printf("Tien dien ban tieu thu trong thang nay la: %d", tienDien);
	}else {
		tienDien = soDien * 30000;
		printf("Tien dien ban tieu thu trong thang nay la: %d", tienDien);
	}
	return 0;
}
