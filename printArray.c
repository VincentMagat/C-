#include <stdio.h>

int main()
{
    double prices[] = {5.0, 6.0, 7.0, 8.0, 9.0};

   

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);

    }
    return 0;
}