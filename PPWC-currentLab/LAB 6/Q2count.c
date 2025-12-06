#include <stdio.h>

int countEven(int);
int countOdd(int);


int main(){
    int n;

    printf("Enter number: ");
    scanf("\n%d", &n);

    int ce = countEven(n);
    int co = countOdd(n);

    printf("\nno of odd: %d", co);
    printf("\nno of even: %d", ce);
    return 0;
}


int countEven(int n){
    if (n>0){
        if((n%10)%2 == 0){
            return 1+countEven(n/10);
        }
        else{
            return countEven(n/10);
        }
    }
    else{
        return 0;
    }
}



int countOdd(int n){
    if (n>0){
        if((n%10)%2 == 0){
            return countEven(n/10);
        }
        else{
            return 1+countEven(n/10);
        }
    }
    else{
        return 0;
    }
}