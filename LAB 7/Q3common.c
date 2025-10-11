#include <stdio.h>


void common(int[],int[], int);

void diff(int[], int[], int);

void unique(int[], int);

int main(){
	
	
	int size = 4;
	int arr1[size], arr2[size];
	printf("enter 4 Numbers for arr1: ");
	
	for(int i = 0; i<size; i++){
		scanf("\n%d", &arr1[i]);
	}
	
	for(int i = 0; i<size; i++){
		printf(" %d ", arr1[i]);
	}
	printf("\n");
	
	printf("enter 4 Numbers for arr2: ");
	
	for(int i = 0; i<size; i++){
		scanf("\n%d", &arr2[i]);
	}
	
	for(int i = 0; i<size; i++){
		printf(" %d ", arr2[i]);
	}
	printf("\n");
	
	
	
	printf("Common elements: ");
	common(arr1,arr2,size);
	
	printf("\n");
	
	
	printf("diff elements: ");
	diff(arr1,arr2,size);
	
	printf("\n");
	
	
	
	printf("unique elements: ");
	unique(arr2, size);
	
	printf("\n");
	
		
}





void common(int arr1[], int arr2[], int size){

	for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				if(arr1[i]==arr2[j]){
					printf(" %d ", arr2[j]);
					break;
				}
			}
	}

}



void diff(int arr1[], int arr2[], int size){

	for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				if(arr1[i]==arr2[j]){
					break;
				}
				if(j== size-1){
					printf(" %d ", arr1[i]);
				}
			}
	}

}

void unique(int arr[], int size){

	printf(" %d ", arr[0]);

	for(int i=0; i<size; i++){
			for(int j=0; j<i; j++){
				
				if(arr[i]==arr[j]){

					break;
				}
				if(j== i-1){
					printf(" %d ", arr[i]);
				}
			}
	}


}






