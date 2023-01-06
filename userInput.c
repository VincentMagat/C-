#include <stdio.h>

int main(){
    int age;
    char name[25];

    printf("What's your name?");
    //scanf("%s", &name);
    fgets(name, 25, stdin); //"if it contain spaces"

    printf("\nHow old are you?");
    scanf("%d", &age); // "&" is the address of the operator
    
    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);
    
    
    return 0;
}