#include <stdio.h>


int main(){
    
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }
    else if(age == 0){
        printf("You were just born bruh get out");
    }
    else if(age < 0){
        printf("You aint even born yet bruh!");

    }
    else{
        printf("You are too you young!");
    }

    return 0;
}