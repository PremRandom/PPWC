#include <stdio.h>

void pattern(int);

int main(){
    int n;
    printf("Enter a number to print pattern: ");
    scanf("\n%d", &n );

    pattern(n);
}


void pattern(int n){
    int i ,j, k = 1;

    for(i = 1;i<=n; i++){
        for(j = 1; j<=i; j++){
            printf(" %d ", k);
            k++;
        }
        printf("\n");
    }
}