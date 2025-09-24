#include <stdio.h>

int main(){
	int num,numc, sum = 0, digit;
	printf("Enter a Number to get the sum of digits: ");
	scanf("\n%d", &num);
	numc = num;
	while(num>0){
		sum = sum + (num%10);
		num = num/10;
	}
	printf("Sum of digits of given number: %d is = %d \n",numc, sum );
	
	return 0;
}
