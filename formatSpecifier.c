#include <stdio.h>

int main(){
    //format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %string = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer
    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1: $%-8.2f\n", item1); //to display only 2 digits added .2 before "f" for a float data type
    printf("item 2: $%-8.2f\n", item2); // added 8 for field width (spaces)
    printf("item 3: $%-8.2f\n", item3); // added negative sign to left align

    return 0;
}