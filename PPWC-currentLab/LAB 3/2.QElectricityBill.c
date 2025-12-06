// Calc. electricity bill | user input no. of units | output bill amount
// 1st 50 : 0.50
// 50 - 150 : 0.75
// 150 - 250 : 1.2
// above 250 : 1.5 

#include <stdio.h>
int main() {
    int unit;
    float bill;

    printf("Enter no. of units: ");
    scanf("\n%d", &unit);

    if(unit<0){
        printf("Unit value can only be positive.");
    }
    else if(unit <= 50){
        bill = unit*0.5;
    }
    else if(unit <= 150){
        bill = 25 + (unit-50)*0.75;
    }
    else if(unit <= 250){
        bill = 100 + (unit-150)*1.2;
    }

    else{
        bill = 220 + (unit-250)*1.5;
    }

    //surcharge
    bill = bill*1.2;

printf("Total Bill for unit: %d is  Rs. %0.2f", unit, bill);


}