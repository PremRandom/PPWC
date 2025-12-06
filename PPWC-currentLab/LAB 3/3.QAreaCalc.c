// circle square rect

#include <stdio.h>
#define pi  3.14

int main(){
    int choice;
    printf("Enter choice for shape\n1. Circle\n2. Square\n3. Rectangle\n");
    scanf("\n%d", &choice);

    switch(choice){
        case 1 : {
            int rad;
            float area;
            printf("Enter Radius for Circle: ");
            scanf("\n%d", &rad);
            area = pi*rad*rad;
            printf("Area of Circle with radius: %d is : %.2f", rad, area );
            break;
        }
        case 2 : {
            int side, area;
            printf("Enter Side length for Square: ");
            scanf("\n%d", &side);
            area = side*side;
            printf("Area of square with side: %d is : %d", side, area);
            break;
        }
        case 3 : {
            int len, br, area;
            printf("Enter  length and breadth for Rectangle: ");
            scanf("\n%d%d", &len, &br);
            area = len*br;
            printf("Area of square with length & breadth: %d & %d is : %d", len, br, area);
            break;
        }
        default : {
            printf("Enter choice only b/w 1-3");
        }
    }
}
