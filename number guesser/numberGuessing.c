#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    const int  MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses = 0;
    int answer;

    srand(time(0)); //uses the currrent time as a seed to generate random numbers

    answer = (rand() % MAX) + MIN; // generate a random number between min and max

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if(guess > answer)
        {

            printf("Too high!\n");

        }
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("You got it! nice, handsome bobansome!");
        }
        guesses++;
    }while(guess != answer);

    printf("\nanswer: %d\n", answer);
    printf("guesses: %d\n", guesses);


    return 0;
}