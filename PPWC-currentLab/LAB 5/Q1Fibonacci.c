#include <stdio.h>

int fib(int);

int main(){
    int n;
    printf("Enter a number to print its fibonacci series: ");
    scanf("\n%d", &n );

    for(int i = 0; i <= n; i++)
    {
        printf(" %d ", fib(i));
    }
    
    return 0;
}


int fib(int a){
    if(a <= 1){
        return a;
    }
    return fib(a-1)+ fib(a-2);

}

