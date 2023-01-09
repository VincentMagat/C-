#include <stdio.h>
#include <ctype.h>

int main()
{

    char questions[][100] = {"1. What's your name?:  \n",
                             "2. What's your age?: \n",
                             "3. What's your sign?: \n"};

    char options[][100] = {"A. Me", "B. You", "C. Him", "D. Her",
                           "A. 500", "B. 19", "C. 800", "D. 29",
                           "A. Leo", "B. Cancer", "C. Libra", "D. Capricorn"};

    char answers[3] = {'A', 'D', 'D'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    printf("QUIZ GAME\n");

    for(int i = 0; i < numberOfQuestions; i++)
    {
        printf("*************\n");
        printf("%s\n", questions[i]);
        printf("****************\n");

        for(int j = (i*4); j < (i*4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c");

        guess = toupper(guess);

        if(guess == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("wrong!\n");
        }
        printf("Final Score: %d/%d\n", score, numberOfQuestions);
    }



    return 0;
}