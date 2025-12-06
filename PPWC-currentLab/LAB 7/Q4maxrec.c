#include <stdio.h>

int max(int[],int, int, int);


int main(){

	int arr[6];
	printf("enter 6 Numbers: ");
	
	for(int i = 0; i<6; i++){
		scanf("\n%d", &arr[i]);
	}
	
	for(int i = 0; i<6; i++){
		printf(" %d ", arr[i]);
	}
	
	printf("\n Maximum of array = %d",max(arr, 6, arr[0], 0));
//	printf("\n Minimum of array = %d\n",min(arr, 6));
	

}

int max(int arr[],int size, int max1, int i){
	if(size == i){
		return max1;
	}
	
	if(max1<arr[i]){
		return max(arr, size, arr[i], ++i);
	}
	else{
		return max(arr, size, max1, ++i);
	}
	

}





