#include <stdio.h>

int main(){
	int nums[] =  {2,43,65,6,7,7,6,675,6};
	
	int sum = 0;
	for(int i=0; i<9; i++){
		sum += nums[i];
	}
	
	printf("Sum of element: %d\n", sum);


}
