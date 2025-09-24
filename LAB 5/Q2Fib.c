#include <stdio.h>

void fib(int);

int main(){
    int n;
    printf("Enter a number to print its fibonacci series: ");
    scanf("\n%d", &n );

    fib(n);

    return 0;
}

void fib(int n){
    int a = 0, b = 1, c = 0;
    
    if(n == 0){
        printf("0");
    }
    else if(n == 1){
        printf("0  1");
    }

    else {
        printf("0  1 ");
        for(int i = 2; i <= n; i++){
            c = a + b;
            printf(" %d ", c);
            a = b;
            b = c;


        }
    }
}


