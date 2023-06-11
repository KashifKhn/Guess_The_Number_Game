#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

void welcomScreen()
{
    clearScreen();
    printf("\n\n\n");
    printf("\t\t###################################################\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#               -----------------------           #\n");
    printf("\t\t#               -----------------------           #\n");
    printf("\t\t#               | Welcome To The Game |           #\n");
    printf("\t\t#               -----------------------           #\n");
    printf("\t\t#               -----------------------           #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                      Press                      #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 -->  1 to Start The Game        #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 -->  0 to exit the Game         #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t###################################################\n");

    int option;
    scanf("%d", &option);
    printf("\n\n\n");
    if (option == 1)
    {
        mainMenu();
    }
    else if (option == 0)
    {
        exitGame();
    }
    else
    {
        printf("Invalid Option");
        welcomScreen();
    }
}

void mainMenu()
{
    clearScreen();
    printf("\n");
    printf("\t\t###################################################\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 Welcome To Main Menu            #\n");
    printf("\t\t#               -----------------------           #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 Press                           #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#               --> 1 Beginner level              #\n");
    printf("\t\t#               --> 2 Easy level                  #\n");
    printf("\t\t#               --> 3 Middle level                #\n");
    printf("\t\t#               --> 4 Hard level                  #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#               --> 9 to exit the Main Menu       #\n");
    printf("\t\t#               --> 0 to exit the Game            #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t###################################################\n");
    int option;
    scanf("%d", &option);
    printf("\n\n\n");
    if (option == 1)
        beginnerLevelWelcomScreen();
    else if (option == 2)
        easyLevel();
    else if (option == 3)
        middleLevel();
    else if (option == 4)
        hardLevel();
    else if (option == 9)
        welcomScreen();
    else if (option == 0)
        exitGame();
    else
        printf("Invalid Option");
    mainMenu();
}

void beginnerLevelWelcomScreen()
{
    clearScreen();
    printf("\t\t\t #-----------------------------------------------------------#\n");
    printf("\t\t\t #************** Welcome To The Beginner Level **************#\n");
    printf("\t\t\t #___________________________________________________________#\n");
    printf("\n\n");
    printf("\t\t\t #               Rules of Beginner Level                     #\n");
    printf("\t\t\t #              -------------------------                    #\n");
    printf("\n");
    printf("\t\t\t # 1. You have to guess a number between 1 to 100            #\n");
    printf("\t\t\t # 2. You have Unlimited chances to guess the number         #\n");
    printf("\t\t\t # 3. If you guess the number then you will win the game     #\n");
    printf("\t\t\t #___________________________________________________________#\n");
    printf("\n\n");
    printf("\t\t\t            *   Press any key to Start the game              #\n");
    printf("\t\t\t            *   If you want to return to Menu press 0        #\n");
    printf("\t\t\t #___________________________________________________________#\n");

    char option;
    option = getch();
    option -= 48;
    printf("\n\n\n");
    if (option == 0)
        mainMenu();
    else
        beginnerLevel();
}

void beginnerLevel()
{
    char option;
    do
    {
        int randomNumber, guessNumber, guessCount = 0;
        srand(time(0));
        randomNumber = rand() % 100 + 1;
        printf("Random Number is %d\n", randomNumber);
        int upperLimit = 100, lowerLimit = 1;
        printf("\nGuess the number between %d to %d\n\n", lowerLimit, upperLimit);
        do
        {
            scanf("%d", &guessNumber);
            guessCount++;
            if (guessNumber == randomNumber)
            {
                printf("You guess the number in %d times\n\n", guessCount);
                winGameScreen();
                break;
            }
            else if (guessNumber > randomNumber)
            {
                if (guessNumber > upperLimit)
                {
                    printf("You guess the number out of range\n\n");
                    printf("Guess the number between %d to %d\n\n", lowerLimit, upperLimit);
                    continue;
                }
                printf("You guess the higher number\n\n");
                upperLimit = guessNumber;
                printf("Guess the number between %d to %d\n\n", lowerLimit, upperLimit);
            }
            else if (guessNumber < randomNumber)
            {
                if (guessNumber < lowerLimit)
                {
                    printf("You guess the number out of range\n\n");
                    printf("Guess the number between %d to %d\n\n", lowerLimit, upperLimit);
                    continue;
                }
                printf("You guess the lower number\n\n");
                lowerLimit = guessNumber;
                printf("Guess the number between %d to %d\n\n", lowerLimit, upperLimit);
            }
        } while (guessNumber != randomNumber);
        sleep(3);
        playAgain();
        option = getch();
        option -= 48;
    } while (option != 0);
}

void easyLevel()
{
    printf("Easy Level");
}

void middleLevel()
{
    printf("Middle Level");
}

void hardLevel()
{
    printf("Hard Level");
}

void exitGame()
{
    printf("Game Exited");
}

void playAgain()
{
    clearScreen();
    printf("\n");
    printf("\t\t###################################################\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 Want To paly Again              #\n");
    printf("\t\t#               -----------------------           #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#               --> Press any Key to Play Again   #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#               --> 0 to exit the Game            #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t###################################################\n");
}

void winGameScreen()
{
    clearScreen();
    printf("\n");
    printf("\t\t*#*********************************************************#*\n");
    printf("\t\t*#*********************************************************#*\n");
    printf("\t\t*#*                                                       *#*\n");
    printf("\t\t*#*           $$ !!! Congratulations!!! $$                *#*\n");
    printf("\t\t*#*                                                       *#*\n");
    printf("\t\t*#*              $***** WINNER *****$                     *#*\n");
    printf("\t\t*#*                                                       *#*\n");
    printf("\t\t*#*       ** You have conquered the game! **              *#*\n");
    printf("\t\t*#*                                                       *#*\n");
    printf("\t\t*#*            Enjoy your well-deserved                   *#*\n");
    printf("\t\t*#*              victory and celebration!                 *#*\n");
    printf("\t\t*#*                                                       *#*\n");
    printf("\t\t*#*********************************************************#*\n");
    printf("\t\t*#*********************************************************#*\n");
    printf("\n");
}

void losingScreen()
{
    clearScreen();
    printf("\n");
    printf("\t\t****************************************************\n");
    printf("\t\t*                                                  *\n");
    printf("\t\t*              Oops! You Lost!                     *\n");
    printf("\t\t*                                                  *\n");
    printf("\t\t*              Better luck next time!              *\n");
    printf("\t\t*                                                  *\n");
    printf("\t\t****************************************************\n");
}

void clearScreen()
{
    system("cls");
}

int main()
{
    welcomScreen();
}