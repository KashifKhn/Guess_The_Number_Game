#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <ctype.h>

void welcomScreen();
void mainMenu();
void beginnerLevelWelcomScreen();
void beginnerLevel();
void easyLevelWlecomScreen();
void easyLevel();
void middleLevelWelcomeScreen();
void middleLevel();
void hardLevelWelcomeScreen();
void hardLevel();
int userGuessNumber();
void playAgain();
void winGameScreen(int guessCount);
void losingScreen();
void exitGame();
void clearScreen();

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

    char option;
    option = getch();
    option -= 48;
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
    char option;
    option = getch();
    option -= 48;
    printf("\n\n\n");
    if (option == 1)
        beginnerLevelWelcomScreen();
    else if (option == 2)
        easyLevelWlecomScreen();
    else if (option == 3)
        middleLevelWelcomeScreen();
    else if (option == 4)
        hardLevelWelcomeScreen();
    else if (option == 9)
        welcomScreen();
    else if (option == 0)
        exitGame();
    else
        printf("Invalid Option");
    mainMenu();
}

int userGuessNumber()
{
    int guessNumber;
    scanf("%d", &guessNumber);
    return guessNumber;
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
        // printf("Random Number is %d\n", randomNumber);
        int upperLimit = 100, lowerLimit = 1;
        printf("\nGuess the number between %d to %d\n\n", lowerLimit, upperLimit);
        do
        {
            guessNumber = userGuessNumber();
            guessCount++;
            if (guessNumber == randomNumber)
            {
                printf("You guess the number in %d times\n\n", guessCount);
                winGameScreen(guessCount);
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

void easyLevelWlecomScreen()
{
    clearScreen();
    printf("\t\t\t #-----------------------------------------------------------#\n");
    printf("\t\t\t #*************** Welcome To The Easy Level *****************#\n");
    printf("\t\t\t #___________________________________________________________#\n");
    printf("\n\n");
    printf("\t\t\t #                   Rules of Easy Level                     #\n");
    printf("\t\t\t #                  ---------------------                    #\n");
    printf("\n");
    printf("\t\t\t # 1. You have to guess a number between 1 to 500            #\n");
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
        easyLevel();
}

void easyLevel()
{
    char option;
    do
    {
        int randomNumber, guessNumber, guessCount = 0;
        srand(time(0));
        randomNumber = rand() % 500 + 1;
        // printf("Random Number is %d\n", randomNumber);
        int upperLimit = 500, lowerLimit = 1;
        printf("\nGuess the number between %d to %d\n\n", lowerLimit, upperLimit);
        do
        {
            guessNumber = userGuessNumber();
            guessCount++;
            if (guessNumber == randomNumber)
            {
                printf("You guess the number in %d times\n\n", guessCount);
                winGameScreen(guessCount);
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

void middleLevelWelcomeScreen()
{
    clearScreen();
    printf("\t\t\t #-------------------------------------------------------------#\n");
    printf("\t\t\t #*************** Welcome To The Middle Level *****************#\n");
    printf("\t\t\t #_____________________________________________________________#\n");
    printf("\n\n");
    printf("\t\t\t #                   Rules of Middle Level                     #\n");
    printf("\t\t\t #                  ---------------------                      #\n");
    printf("\n");
    printf("\t\t\t # 1. You have to guess a number between 1 to 100              #\n");
    printf("\t\t\t # 2. You have limited chances to guess the number             #\n");
    printf("\t\t\t # 2. You have Total 7 chances to guess the number             #\n");
    printf("\t\t\t # 3. If you guess the number then you will win the game       #\n");
    printf("\t\t\t #_____________________________________________________________#\n");
    printf("\n\n");
    printf("\t\t\t            *   Press any key to Start the game                #\n");
    printf("\t\t\t            *   If you want to return to Menu press 0          #\n");
    printf("\t\t\t #_____________________________________________________________#\n");

    char option;
    option = getch();
    option -= 48;
    printf("\n\n\n");
    if (option == 0)
        mainMenu();
    else
        middleLevel();
}

void middleLevel()
{
    char option;
    do
    {
        int totalChance = 7;
        int randomNumber, guessNumber, guessCount = 0;
        srand(time(0));
        randomNumber = rand() % 100 + 1;
        // printf("Random Number is %d\n", randomNumber);
        int upperLimit = 100, lowerLimit = 1;
        printf("\nGuess the number between %d to %d\n\n", lowerLimit, upperLimit);
        do
        {
            guessNumber = userGuessNumber();

            if (totalChance == 1)
            {
                printf("\n\n?????You have only one chance left???????\n\n");
            }

            if (guessNumber == randomNumber)
            {
                printf("You guess the number in %d times\n\n", guessCount);
                winGameScreen(guessCount);
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
                printf("\nYou guess the higher number\n");
                upperLimit = guessNumber;
                printf("Guess the number between %d to %d\n", lowerLimit, upperLimit);
                printf("You have %d chances left\n\n", totalChance);
            }
            else if (guessNumber < randomNumber)
            {
                if (guessNumber < lowerLimit)
                {
                    printf("You guess the number out of range\n\n");
                    printf("Guess the number between %d to %d\n\n", lowerLimit, upperLimit);
                    continue;
                }
                printf("\nYou guess the lower number\n");
                lowerLimit = guessNumber;
                printf("Guess the number between %d to %d\n", lowerLimit, upperLimit);
                printf("You have %d chances left\n\n", totalChance);
            }
            if (totalChance == 0)
            {
                sleep(2);
                losingScreen();
                break;
            }
            guessCount++;
            totalChance--;
        } while (1);
        sleep(5);
        playAgain();
        option = getch();
        option -= 48;
    } while (option != 0);
}

void hardLevelWelcomeScreen()
{
    clearScreen();
    printf("\t\t\t #-----------------------------------------------------------#\n");
    printf("\t\t\t #*************** Welcome To The Hard Level *****************#\n");
    printf("\t\t\t #___________________________________________________________#\n");
    printf("\n\n");
    printf("\t\t\t #                   Rules of Hard Level                     #\n");
    printf("\t\t\t #                  ---------------------                    #\n");
    printf("\n");
    printf("\t\t\t # 1. You have to guess a number between 1 to 500            #\n");
    printf("\t\t\t # 2. You have limited chances to guess the number           #\n");
    printf("\t\t\t # 2. You have Total 9 chances to guess the number           #\n");
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
        hardLevel();
}

void hardLevel()
{
    char option;
    do
    {
        int totalChance = 9;
        int randomNumber, guessNumber, guessCount = 0;
        srand(time(0));
        randomNumber = rand() % 500 + 1;
        // printf("Random Number is %d\n", randomNumber);
        int upperLimit = 500, lowerLimit = 1;
        printf("\nGuess the number between %d to %d\n\n", lowerLimit, upperLimit);
        do
        {
            guessNumber = userGuessNumber();
            guessCount++;
            if (totalChance == 1)
            {
                printf("\n\n?????You have only one chance left???????\n\n");
            }

            if (guessNumber == randomNumber)
            {
                printf("You guess the number in %d times\n\n", guessCount);
                winGameScreen(guessCount);
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
                printf("\nYou guess the higher number\n");
                upperLimit = guessNumber;
                printf("Guess the number between %d to %d\n", lowerLimit, upperLimit);
                printf("You have %d chances left\n\n", totalChance);
            }
            else if (guessNumber < randomNumber)
            {
                if (guessNumber < lowerLimit)
                {
                    printf("You guess the number out of range\n\n");
                    printf("Guess the number between %d to %d\n\n", lowerLimit, upperLimit);
                    continue;
                }
                printf("\nYou guess the lower number\n");
                lowerLimit = guessNumber;
                printf("Guess the number between %d to %d\n", lowerLimit, upperLimit);
                printf("You have %d chances left\n\n", totalChance);
            }

            if (totalChance == 0)
            {
                sleep(2);
                losingScreen();
                break;
            }

            totalChance--;
        } while (1);
        sleep(5);
        playAgain();
        option = getch();
        option -= 48;
    } while (option != 0);
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
    printf("\t\t#               --> 0 Go to the Main Menu         #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t###################################################\n");
}

void winGameScreen(int guessCount)
{
    clearScreen();
    printf("\n");
    printf("\t\t*#*********************************************************#*\n");
    printf("\t\t*#*********************************************************#*\n");
    printf("\t\t*#*                                                       *#*\n");
    printf("\t\t*#*           $$ !!! Congratulations!!! $$                *#*\n");
    printf("\t\t*#*                                                       *#*\n");
    printf("\t\t*#*         >> You Guess in %d try  <<                    *#*\n", guessCount);
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
    printf("\t\t*              Oops! You Are Out Of Change         *\n");
    printf("\t\t*                                                  *\n");
    printf("\t\t*              Better luck next time!              *\n");
    printf("\t\t*                                                  *\n");
    printf("\t\t****************************************************\n");
}

void exitGame()
{
    system("exit");
    exit(0);
}

void clearScreen()
{
    system("cls");
}

int main()
{
    welcomScreen();
}