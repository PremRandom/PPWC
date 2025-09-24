//calc grade of students | Switch case | user input marks output grade
//m>= 95 - O
//81>= m >= 94 - A
//71>= m >= 80 - B
//61>= m >= 70 - C
//51>= m >= 60 - D
//40>= m >= 50 - E




#include <stdio.h>

int main(){
    int marks, x;
    char grade = 'o';

    printf("Enter Marks: ");
    scanf("%d", &marks);
    x = marks/10;

    ///printf("%d",x);

    switch(x){
        case 10 : if(marks>100){
                    printf ("Enter marks only b/w 0-100");
                }
                else{
                    grade = 'O';
                }
                break;
        case 9 : if(marks>=95){
                    grade = 'O';
                }
                else{
                    grade = 'A';
                }
                break;

        case 8 : if(marks>81){
                    grade = 'A';
                }
                else{
                    grade = 'B';
                }
                break;


        case 7 : if(marks>71){
                    grade = 'B';
                }
                else{
                    grade = 'C';
                }
                break;

        case 6 : if(marks>61){
                    grade = 'C';
                }
                else{
                    grade = 'D';
                }
                break;

        case 5 : if(marks>51){
                    grade = 'D';
                }
                else{
                    grade = 'E';
                }
                break;

        case 4 : grade = 'F';
                break;

        
        case 3 : grade = 'F';
                break;

        case 2 : grade = 'F';
                break;
            
        case 1 : grade = 'F';
                break;
        case 0 : grade = 'F';
                break;

        default: printf ("Enter marks only b/w 0-100");
                break;

    }

    printf("Grade for entered marks: is - %c",  grade);

    return 0;
}