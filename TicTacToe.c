/*
    Author: Benjamin Simon
    Description: Create a tic tac toe game
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define PLAYERA 'X'
#define PLAYERB 'O'

void drawBoard();
int getSlot(int player);
int changePlayer(int player);
bool isWinner(char slots[9]);

int main()
{
    char spaces[9] = {'1','2','3','4','5','6','7','8','9'};
    int slot = 0;
    int currentPlayer = 1;
    int inputCount = 0;
    bool winner = false;

    while (winner!=true &&  inputCount!=9)
    {
        drawBoard(spaces);

        currentPlayer=changePlayer(currentPlayer);
        slot = getSlot(currentPlayer);

        if(spaces[slot]!=PLAYERA && spaces[slot]!=PLAYERB)
        {
            if(currentPlayer==0)
            {
                spaces[slot]=PLAYERA;
            }
            else if(currentPlayer==1)
            {
                spaces[slot]=PLAYERB;
            }
            ++inputCount;
        }
        winner=isWinner(spaces);
    }

    drawBoard(spaces);
    if(winner?printf("Congratulation Player %d you are the winner!\n", currentPlayer+1):printf("No more Spaces\n"));

    return 0;
}


//Draw TicTacToe Board
void drawBoard(char numbers[9])
{
    system("clear");

    printf("\tTicTacToe\n");
    printf("Player 1 (%c) - Player  2  (%c)\n\n\n", PLAYERA, PLAYERB);

    for(int i =0; i<9; i = i+3)
    {
        printf("   |   |\n");
        printf(" %c | %c | %c\n", numbers[i], numbers[i+1], numbers[i+2]);
        if(i<6?printf("___|___|___\n"):printf("   |   |\n")); 
    }
}

//Set Slot
int getSlot(int player)
{
    int slotNumber=0;
    printf("Player %d, enter a number: ", player+1);
    do
    {
        scanf("%d", &slotNumber);
    } while (slotNumber<1 || slotNumber>9);
    return --slotNumber;
}

//Changes Player
int changePlayer(int player)
{
    if(player==0)
    {
        ++player;
    }
    else if(player==1)
    {
        --player;
    }
    return player;
}

//Checks if game has been won
bool isWinner(char slots[9])
{
    bool result = false;

    if(slots[0] == slots[3] && slots[3]==slots[6])
    {
        result = true;
    }
    else if (slots[0] == slots[1] && slots[1]==slots[2])
    {
        result = true;
    }
    else if (slots[0] == slots[4] && slots[4]==slots[8])
    {
        result = true;
    }
    else if (slots[1] == slots[4] && slots[4]==slots[7])
    {
        result = true;
    }
    else if (slots[2] == slots[5] && slots[5]==slots[8])
    {
        result = true;
    }
    else if (slots[2] == slots[4] && slots[4]==slots[6])
    {
        result = true;
    }
    else if (slots[3] == slots[4] && slots[4]==slots[5])
    {
        result = true;
    }
    else if (slots[6] == slots[7] && slots[7]==slots[8])
    {
        result = true;
    }

    return result;
}
