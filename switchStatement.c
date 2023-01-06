#include <stdio.h>

int main(){
    /* switch = A more efficient alternative to using many "else if" statements
    allows a value to be tested for equality against many cases
    */

   char grade;

   printf("\nEnter a letter grade: ");
   scanf("%c", &grade);
   switch(grade){
        case 'A':
            printf("Good job, G\n");
            break;
        case 'B':
            printf("not bad, G\n");
            break;
        case 'C':
            printf("C get degrees\n");
            break;
        case 'D':
            printf("Ds nuts\n");
            break;
        case 'F':
            printf("bbruh");
            break;
        default:
            printf("Please enter only valid grade!");
          
   }
   

   return 0;
}