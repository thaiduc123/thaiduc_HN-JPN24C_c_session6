#include<stdio.h>

int main(){
	int password = 12345678;
	int redeem;
	while (1){
		printf("Nhap mat khau (8 ki tu): ");
		scanf("%d", &redeem);
		if (redeem == password){
			printf("Mat khau dung");
			break;
		}
	}
	return 0; 
} 
