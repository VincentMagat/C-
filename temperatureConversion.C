#include <stdio.h>
#include <ctype.h> //because we're working with string function


int main(){
    char unit;
    float temp;

    printf("\nis the temperature in (F) or (C): ");
    scanf("%c", &unit);

    unit = toupper(unit); //make input to upper case

    if(unit == 'C'){
        printf("\n Enter temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n the temp in Farenheit is: %.1f", temp);

    }
    else if(unit == 'F'){
        printf("\n Enter temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\n the temp in Celsius is: %.1f", temp);


    }
    else{
        printf("\n %c is not  valid", unit);
    }




    unit = toupper(unit);
}