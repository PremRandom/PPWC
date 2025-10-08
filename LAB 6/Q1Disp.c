#include <stdio.h>

void displayForward(int);
void displayReverse(int);

int main(){
    printf("forward direction : ");
    displayForward(2345);
    printf("\nReverse direction : ");
    displayReverse(2345);
    return 0;    
}

void displayForward(int n){
    if(n>0){
        displayForward(n/10);
        printf(" %d ", n%10);
    }
}


void displayReverse(int n){
    if(n>0){
        printf(" %d ", n%10);
        displayReverse(n/10);
    }
}