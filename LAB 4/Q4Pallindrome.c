#include <stdio.h>

int main(){
	int num,numc, rev = 0, digit;
	printf("Enter a Number to check the palindrome:  ");
	scanf("\n%d", &num);
	numc = num;
	while(num>0){
		rev = rev*10 + (num%10);
		num = num/10;
	}
	if(numc == rev){
		printf("Given number is Pallindrome\n");
	}
	else{
		printf("Given number is not Pallindrome\n");
	}
	
	return 0;
}
