#include <stdio.h>

int main(){
    /* variable = Allocated space in memory to store a value.
        we refer to variable's name to access the stored value.
        that variable now behaves as if it was the value it contains.
        but we need to declare what type of data we are storing
    */

     int x; // declaration of a varible
     x = 123; // initialization of values in variable
     int y = 321; // delacration of varibale and initialization
     
     
     int age = 21; //integer
     float gpa = 2.05; // floating point number
     char grade = 'C'; //single character
     char name[]= "Me"; //array of characters

     printf("I am %d years old", age);
     printf("\nHello %s", name);
     printf("\nYour average grade is %c\n", grade);
     printf("your gpa is %f", gpa);

}