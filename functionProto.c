#include <stdio.h>

void hello(char[], int); //function proto

int main()
{
    // funtion prototype

    // What is it?
    // Function declaration, w/o a body, before main()
    // Ensures that calls a to a function are made with the correct arguments

    //IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype cause the compiler to the flag an error if arguments are missing

    //ADVAnTAGES
    // 1. easier to navigate a program w/ main() at the top
    // 2. helps wit debugging
    // 3. commonly used in header files
    char name[] = "me";
    int age = 29;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}
