#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = true;

    if(!sunny == true){
        printf("\nIt's cloudy outside!");

    }
    else{
        printf("\nIt's sunny outside!");

    }

    return 0;
}