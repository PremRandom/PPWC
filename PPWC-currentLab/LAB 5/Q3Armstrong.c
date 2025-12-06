#include <math.h>
#include <stdio.h>

int armstrong(int);

int main(){
    int n;
    printf("Enter a number to find Armstrong or not: ");
    scanf("\n%d", &n );

    if(armstrong(n)){
        printf("Given Number: %d is Armstrong", n);
    }
    else{
        printf("Given Number: %d. is not Armstrong", n);
    }

    return 0;
}



int armstrong(int n){

    int numc=n, arm = 0, count = 0;

    while(numc>0){
        numc = numc/10;
        count += 1;
    }

    numc = n;
    while(numc > 0){
        arm = arm + pow(numc % 10, count);
        numc = numc/10;
    }

    if(n == arm){
        return 1;

    }
    else{
        return 0;
    }
}