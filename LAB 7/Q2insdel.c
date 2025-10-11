#include <stdio.h>



int main(){
	
	
	int size = 6;
	int arr[size];
	printf("enter 6 Numbers: ");
	
	for(int i = 0; i<size; i++){
		scanf("\n%d", &arr[i]);
	}
	
	for(int i = 0; i<size; i++){
		printf(" %d ", arr[i]);
	}
	printf("\n");
	
	
	int pos;
	printf("Enter pos to delete: ");
	scanf("\n%d", & pos);
	if (pos>=0 & pos< size){
		for(int i = pos; i<size; i++){
			arr[i] = arr[i+1];
		}
	
	}
	
		
	for(int i = 0; i<size; i++){
		printf(" %d ", arr[i]);
	}
	printf("\n");
	
	int ele;
	printf("Enter element and pos to insert: ");
	scanf("\n%d \n%d", &ele, &pos);
	
	for(int i= size-1; i> pos; i--){
		arr[i] = arr[i-1];
	}
	arr[pos] = ele;
	
	for(int i = 0; i<size; i++){
		printf(" %d ", arr[i]);
	}
	printf("\n");
	
	
	
	
	
	
	
}
