#include <stdio.h>

int main(){
	int num,numc, sum = 0, digit;
	printf("Enter a Number: ");
	scanf("\n%d", &num);
	numc = num;
	printf("display of each digit from rightmost: \n");
	while(num>0){
		sum = sum + (num%10);
		printf("%d  \n", (num%10));
		num = num/10;
	}
	if(sum%9 == 0){
		printf("Given number: %d is divisible by 9 as its sum i.e %d is divisible by 9 \n", numc,sum);
	}
	else{
		printf("Given number: %d is not divisible by 9 as its sum i.e %d is not divisible by 9 \n", numc,sum);
	}
	
	
	return 0;
}
