
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;

    srand(time(0));

    printf("ROCK PAPER SCISSORS GAME\n");

    printf("\n1. Rock");
    printf("\n2. Paper");
    printf("\n3. Scissors");

    printf("\n\nEnter your choice: ");
    scanf("%d", &user);

    computer = rand() % 3 + 1;

    printf("\nComputer choice: %d", computer);

    if(user == computer)
    {
        printf("\nMatch Draw!");
    }
    else if((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2))
    {
        printf("\nYou Win!");
    }
    else
    {
        printf("\nComputer Wins!");
    }

    return 0;
}
