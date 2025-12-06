#include <stdio.h>

int sum(int);

int main(){
    int n;
    printf("Enter number: ");
    scanf("\n%d", &n);
    int sum1 = sum(n);
    printf("sum of digit is: %d", sum1);
    return 0;
}


int sum(int n){
    if(n>0){
        return (n%10 + sum(n/10));
    }
    else{
        return 0;
    }
}