#include <stdio.h>

int main(){
	int num, i=2;
	printf("Enter a Number :  ");
	scanf("\n%d", &num);
	
	while(1){
		if(num>1){
			if(num%i == 0 ){
				num = num/i;
				i++;
			}
			else{
				printf("Given number is not a factorial of any number");
				break;
			}
		}
		else{
			printf("%d \n", i-1);
			break;
		}
		
	}
	
	return 0;
}
