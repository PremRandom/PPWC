#include <stdio.h>

int main(){
	int num,numc, rev = 0, digit;
	printf("Enter a Number to get the reverse of digits: ");
	scanf("\n%d", &num);
	numc = num;
	while(num>0){
		rev = rev*10 + (num%10);
		num = num/10;
	}
	printf("Reverse of the given number: %d is = %d \n",numc, rev );
	
	return 0;
}
