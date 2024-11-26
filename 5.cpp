#include <stdio.h>

int main(){
	int day,month,year; 
		printf("Nhap nam: ");
		scanf("%d", &year);
		printf("Nhap thang: ");
		scanf("%d", &month);
			switch (month){
				case 1: case 3: case 5: case 8: case 7: case 10: case 12:
					printf ("Co 31 ngay");
					break;
				case 4: case 6: case 9: case 11:
					printf("Co 30 ngay");
					break;
				case 2:
					if (year%4!=0){
						printf("Co 28 ngay");
					} else {
						printf("Co 29 ngay");
					}
					break;
				default:
					printf("Nhap lai");
					break;
			} 
	return 0; 
} 
