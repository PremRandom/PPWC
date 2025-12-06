#include <stdio.h>
#include <math.h>
float func(int, int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("\n%d", &n );
        
    float res = 0;
    for(int i=1; i<=9; i++){
        res += func(n,i);
        printf("%f", func(n,i));
        
    }
    printf("Result of the function is: %f", res);

}



float func(int x, int p){
    float res, res1 , dp;
    res1 = ((x-1)/x);
    res = (1/p)*(pow(res1, p));
    printf("%f  %f", res, res1);
    return res;

}