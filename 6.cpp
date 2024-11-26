#include <stdio.h>

int main(){
	int n = 100;
	for (int i=1; i<=n; i++){
		printf("%d", i);
		if (i%3==0 && i%5==0){
			printf(" FizzBull\n");
		} else if (i%3==0){
			printf(" Fizz\n");
		} else if(i%5==0){
			printf(" Bulzz\n");
		}
		}
	
	return 0; 
} 
