#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
     Keshav Sukirya
     Account: ksukirya1
     CSc 3320
     Program #1
     Due date: 9/25/2022

     Description:
         The user is prompted by the program to enter an integer, and then the integer is used to print that number of lines randomly pulled from the song Die for You by the Weeknd.
     Input:
         Random number stored in the int variable "lines" from user after being prompted.
     Output:
         N lines of the song Die for You by the Weeknd
*/
int main()
{
    int i = 0;
    int lines = 0;
    // printing the description for the assignment and prompting user for number of lines
    printf("CS 3320 HW 1: Random Song Lines Generator\n");
    printf("Song: Die for You by the Weeknd\n");
    printf("Enter number of lines: ");
    // taking in user input
    scanf("%d", &lines);
    // creating random number generator seed
    srand(time(NULL));
    // for loop to print out the number of lines based off of user input
    for (i = 0; i < lines; i++)
    {
        // random generator full of the 16 lines of the song
        int r = rand() % 16;
        // Switch cases with the lyrics in Die for You by the Weeknd
        switch (r)
        {
        case 0:
            printf("You know what I'm thinkin', see it in your eyes\n");
            break;
        case 1:
            printf("You hate that you want me, hate it when you cry\n");
            break;
        case 2:
            printf("You're scared to be lonely, 'specially in the night\n");
            break;
        case 3:
            printf("I'm scared that I'll miss you, happens every time\n");
            break;
        case 4:
            printf("I don't want this feelin', I can't afford love\n");
            break;
        case 5:
            printf("I try to find a reason to pull us apart\n");
            break;
        case 6:
            printf("It ain't workin', 'cause you're perfect, and I know that you're worth it\n");
            break;
        case 7:
            printf("I can't walk away, oh\n");
            break;
        case 8:
            printf("Even though we're goin' through it\n");
            break;
        case 9:
            printf("And it makes you feel alone\n");
            break;
        case 10:
            printf("Just know that I would die for you\n");
            break;
        case 11:
            printf("Baby, I would die for you, yeah\n");
            break;
        case 12:
            printf("The distance and the time between us\n");
            break;
        case 13:
            printf("It'll never change my mind\n");
            break;
        case 14:
            printf("'Cause baby, I would die for you\n");
            break;
        case 15:
            printf("Baby, I would die for you, yeah\n");
            break;
        }
    }

    return 0;
}
