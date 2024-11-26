#include <stdio.h>

int main(){
	float rate, month;
	float afterMoney, increasedMoney, startMoney;
	printf("Nhap so tien gui: ");
	scanf("%f", &startMoney);
	printf("Nhap lai xuat (%%): ");
	scanf("%f", &rate);
	printf("Nhap so thang gui: ");
	scanf("%f", &month);
	for (float i=1; i<= month; i++){
		increasedMoney+= (float) (startMoney/100)*rate;
	}
	afterMoney = (float) startMoney + increasedMoney;
	printf("Tien lai: %f\n", increasedMoney);
	printf("Tien nhan duoc: %f", afterMoney);
	return 0; 
} 
