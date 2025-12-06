#include <stdio.h>


int max(int arr[],int);
int min(int arr[],int );

int main(){

	int arr[6];
	printf("enter 6 Numbers: ");
	
	for(int i = 0; i<6; i++){
		scanf("\n%d", &arr[i]);
	}
	
	for(int i = 0; i<6; i++){
		printf(" %d ", arr[i]);
	}
	
	printf("\n Maximum of array = %d",max(arr, 6));
	printf("\n Minimum of array = %d\n",min(arr, 6));
	

}

int max(int arr[], int size){
	int max1 = arr[0];
	for(int i = 0; i<size; i++){
		if(max1<arr[i]){
			max1 = arr[i];
		}
	}
	return max1;

}


int min(int arr[], int size){
	int min = arr[0];
	for(int i = 0; i<size; i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}
	return min;

}

