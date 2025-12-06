#include <stdio.h>

int gcd(int, int);

int main(){
     int n1,n2;
    printf("Enter two number: ");
    scanf("\n%d %d", &n1, &n2);
    int gcd1 = gcd(n1, n2);
    printf("GCD of %d and %d is: %d", n1, n2, gcd1);
    printf("\n%d", gcd1);
    return 0;

}

int gcd(int a, int b){
    if(b == 0){
        return a;
    }

    return gcd (b, a%b);

}