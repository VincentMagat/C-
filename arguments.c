#include <stdio.h>

void birthday( char name[] , int age){

    printf("\n Happy Birthday dear %s!", name);
    printf("\n You are %d years old!", age);
}

int main(){
    char name[] = "me";
    int age = 29;
    birthday(name, age);

    return 0;
}