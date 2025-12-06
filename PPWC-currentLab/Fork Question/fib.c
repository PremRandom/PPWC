#include <stdio.h>



int fib(int n){
	if(n <= 1){
		return n;
	}
	return fib(n-1) + fib(n-2);


}



int main() {
	int first = 0;
	int sec = 1;
	int lent = 10;
	//printf("%d %d", first, sec);
	for(int i=0; i<lent; i++){

		
		printf(" %d", fib(i));
	
	
	}
	printf("\n");
	
	
	return 0;
}
