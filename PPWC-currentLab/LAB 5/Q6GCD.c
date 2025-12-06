#include <stdio.h>

int gcd(int, int);

int main(){
    int n1, n2;
    printf("Enter 2 number: ");
    scanf("\n%d %d", &n1, &n2 );

    printf("%d",gcd(n1, n2));

    return 0;
}

int gcd(int a, int b){

    int gcd=1, lim;
    if(a<b){
        a = a+b;
        b = a-b;
        a = a-b;
    }

    lim = ((int)(a**0.5) +1);

    for(int i =2; i<= lim; i++){
        if((a%i == 0) & (b%i == 0)){
            gcd = i;
        }


    }
    return gcd;
}