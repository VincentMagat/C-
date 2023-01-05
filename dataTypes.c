#include <stdio.h>
#include <stdbool.h> // to use boolean in C

int main(){
    char a = 'C'; // single character is %c

    char b[] = "Me"; // array of characters is %s

    float c = 3.141592; // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.141592653589793; //8 bytes (64 bits of precision) 15-16 digits is %lf
    bool e = true; // 1 byte (true or false) is %d
    char f = 100; //1 byte (-128 to +127) %d or %C
    unsigned char g = 255; // 1 byte (0 to +266) %d or %c. this disregard any negative numbers
    short int h = 32767; //2 bytes(-32,768 to 32,767) %d
    unsigned short int i = 65535; // 2 bytes ( 0 to 65,535) %d
    int j = 23243; // 4 bytes(-2,147,483,648 to + 2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4, 294,964, 967, 295) %u

    long long int l = 98374927492348793; // 8 bbytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 438753478528731872U; //8bytes (0 to +18 quintillion) %llu
    
    printf("this is how you print characters: %c\n", a);
    printf("this is how you print multiple characters: %s\n", b);
    printf("this is how you print a float: %f\n", c);
    printf("this is how you print a double: %lf\n", d);
    printf("this is how you print a bool: %d\n", e);
    printf("this is how you print char with digits: %C\n", f);
    printf("this is how you print unsigned char: %d\n", g);
    printf("this is how you print short: %d\n", h);
    printf("this is how you print unsigned short: %d\n", i);
    printf("this is how you print int: %d\n", j);
    printf("this is how you print unsigned int: %u\n", k);
    printf("this is how you print long long int: %lld\n", l);
    printf("this is how you print unsigned long long int: %llu", m);


   return 0;
}