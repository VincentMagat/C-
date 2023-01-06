#include <stdio.h>

double square(double X)
{
    double result = X * X;
    return result;
    
}

int main()
{
    // return = returns a value back to a calling funtion
    double x = square(3.14);
    printf("%lf", x);

    return 0;
}