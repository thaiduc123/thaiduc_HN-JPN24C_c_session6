#include<stdio.h>

int main(){
	int a,b,c,d,e,sum;
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
	if (a%2!=0){
		goto b;
	} else {
		a = 0;
		goto b;
	}
	b:
	if (b%2!=0){
		goto c;
	} else {
		b = 0;
		goto c;
	}
	c:
	if (c%2!=0){
		goto d;
	} else {
		c = 0;
		goto d;
	}
	d:
	if (d%2!=0){
		goto e;
	} else {
		d = 0;
		goto e;
	}
	e:
	if (e%2!=0){
		goto sum;
	} else {
		e = 0;
		goto sum;
	}
	sum:
	sum = a+b+c+d+e;
	printf("Tong cac so le la: %d", sum);
	return 0; 
} 
