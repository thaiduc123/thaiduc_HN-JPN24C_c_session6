#include<stdio.h>

int main(){
	int a,b,c,d,e;
	int odd= 0;
	int even = 0;
	printf("Nhap so dau tien: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Nhap so thu ba: ");
	scanf("%d", &c);
	printf("Nhap so thu tu: ");
	scanf("%d", &d);
	printf("Nhap so thu nam: ");
	scanf("%d", &e);
	if (a%2==0){
		even += 1;
	} else {
		odd += 1;
	}
	if (b%2==0){
		even += 1;
	} else {
		odd += 1;
	}
	if (c%2==0){
		even += 1;
	} else {
		odd += 1;
	}
	if (d%2==0){
		even += 1;
	} else {
		odd += 1;
	}
	if (e%2==0){
		even += 1;
	} else {
		odd += 1;
	}
	printf("So cac so le la: %d\n", odd);
	printf("So cac so chan la: %d", even);
	return 0; 
} 
