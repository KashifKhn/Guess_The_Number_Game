#include <stdio.h>

void welcomScreen()
{
    printf("\n\n\n");
    printf("\t\t###################################################\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 Welcome To The Game             #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 Press                           #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                   * 1 to Start The Game         #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                   * 0 to exit the Game          #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t###################################################\n");

    int option;
    scanf("%d", &option);
    printf("\n\n\n");
    if(option == 1)
    {
        startGame();
    }
    else if(option == 0)
    {
        exitGame();
    }
    else
    {
        printf("Invalid Option");
        welcomScreen();
    }

}

void startGame()
{
    printf("Game Started");
    printf("\n\n\n");
    printf("\t\t###################################################\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 Welcome To The Game             #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 Press                           #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 * 1 Beginner level              #\n");
    printf("\t\t#                 * 2 Easy level                  #\n");
    printf("\t\t#                 * 3 Middle level                #\n");
    printf("\t\t#                 * 4 Hard level                  #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                 * 9 to exit the Main Menu       #\n");
    printf("\t\t#                 * 0 to exit the Game            #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t###################################################\n");

    int option;
    scanf("%d", &option);
    printf("\n\n\n");
    if(option == 1)
    {
        beginnerLevel();
    }
    else if(option == 2)
    {
        easyLevel();
    }
    else if(option == 3)
    {
        middleLevel();
    }
    else if(option == 4)
    {
        hardLevel();
    }
    else if(option == 9)
    {
        welcomScreen();
    }
    else if(option == 0)
    {
        exitGame();
    }
    else
    {
        printf("Invalid Option");
        startGame();
    }

}

void beginnerLevel()
{
    printf("\t\t\t ************ Welcome To The Beginner Level ************\n");
    printf("\t\t\t #_____________________________________________________#\n");

    
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

int main()
{
    welcomScreen();
}