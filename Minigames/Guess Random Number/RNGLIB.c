#include "RNGLIB.h"
#include <stdio.h>
#include <time.h>
int rng;

int rn_gen(int lower, int upper)
{
    for (int i = 0; i < 1; i++)
    {
        rng = rand() % (lower - upper + 1) + lower;
    }
    return rng;
}

int high_low_right(int user_input, int rng)
{
    int try;
    try++;
    if (user_input < rng)
    {
        printf(
            "Your guess %d is lower than the number you are searching for!\n",
            user_input);
    }
    else if (user_input > rng)
    {
        printf(
            "Your guess %d is higher than the number you are searching for!\n",
            user_input);
    }
    else if (user_input = rng)
    {
        printf(
            "\n\n\nCongrats you guessed the right number in %d Trys!!!\n\n\n",
            try);
        return 0;
    }
    else if (user_input <= 0)
    {
        printf("Please input a positive number!");
    }
}

void welcome()
{
    printf("This programm was created for you to guess a random number from 0 "
           "- 1000!\nEverytime you guess wrong you "
           "will be "
           "told if the number you are searching for is higher or lower than "
           "your guess!\nAlso you will be told how "
           "many trys it took you to guess the number!\n");
    printf("Do you wish to customize the guessing area (1 = yes | 2 = no): ");
}
