#include <stdio.h>
#include <stdbool.h>
 
 int main(){
    // logical operators = && (AND) check if two conditions are true
    float temp = 25;
    bool sunny = true;

    if (temp >= 0 && temp <= 30 && sunny){
        printf("The weather is good!");
    }
    else{
        printf("The weather is bad!");
    }

    return 0;
 }