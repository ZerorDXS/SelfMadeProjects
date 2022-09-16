#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rn_gen(int lower, int upper)
{
    int rng;
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


int main()
{
    int lower = 0;
    int upper = 1000;
    int user_input;
    int try;
    int rng;
    int custom;


    void welcome();
    scanf("%d", &custom);
    if (custom == 1)
    {
        printf("Please enter the lowest number it can be (default = 0): ");
        scanf("%d", &lower);
        if (lower >= 0)
        {
            printf("Please enter the highest number it can be(default 1000): ");
            scanf("%d", &upper);
            for (int i = 0; i < 1; i++)
                rng = rn_gen(lower, upper);

            printf("Please enter your first guess here: ");
            scanf("%d", &user_input);
            while (1)
            {
                int high_low_right(int user_input, int rng);

                printf("Please enter your next guess: ");
                scanf("%d", &user_input);
            }
        }
        else
        {
            printf("\n\n\nPlease try again with a positive number!\n\n\n");
            return 0;
        }
    }
    else if (custom > 1)
    {
        rng = rn_gen(lower, upper);

        printf("Please enter your first guess here: ");
        scanf("%d", &user_input);
        while (1)
        {
            int high_low_right(int user_input, int rng);

            printf("Please enter your next guess: ");
            scanf("%d", &user_input);
        }
    }
    else
    {
        printf("\n\n\nWrong selection!\n\n\n");
        return 0;
    }
    return 0;
}
