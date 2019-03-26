/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Ch 5 Program
 *
 *        Version:  1.0
 *        Created:  02/20/2019 02:35:31 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM_PLAYERS 5

// Function Prototypes

int GetJerseyNumber(int playerNum){
    int jerseyNum;
    if(playerNum > 0)
        printf("Enter player %d's jersey number:\n", playerNum);
    else if (playerNum == 0)
        printf("Enter a jersey number:\n");
    else 
        printf("Enter a new jersey number:\n");

    scanf("%d", &jerseyNum);
    
    return jerseyNum;
}

int GetRating(int playerNum){
    int rating;
    if(playerNum > 0)
        printf("Enter player %d's rating:\n", playerNum);
    else if (playerNum == 0)
        printf("Enter a new rating for player:\n");
    else
        printf("Enter a rating for the new player:\n");
    
    scanf("%d",&rating);
    
    return rating;
}
void GetJerseyNumberAndRating(int* jerseyNum, int* rating, int playerNum)
{
    *jerseyNum = GetJerseyNumber(playerNum);
    *rating = GetRating(playerNum);
    printf("\n");

    return;
}

void OutputPlayer(int jerseyNum, int rating, int playerNum)
{
    printf("Player %d -- Jersey number: %d, Rating: %d\n",
            playerNum, jerseyNum, rating);
    return;
}

void OutputRoster(int players[][2], int length)
{
    printf("ROSTER\n");
    for(int i = 0; i < length; i++){
        OutputPlayer(players[i][0],players[i][1],i+1);
    }

    printf("\n");
    return;
}  

void UpdatePlayerRating(int players[][2], int length)
{
    int jerseyNum;
    printf("Enter a jersey number:\n");
    scanf("%d", &jerseyNum);
    for(int i = 0; i < length; i++){
        if(players[i][0] == jerseyNum){
            players[i][1] = GetRating(0);
            break;
        }
    }
    
    return;
}
void OutputPlayerAboveRating(int players[][2], int length)
{
    int rating;
    
    printf("Enter a rating:\n");
    scanf("%d", &rating);

    printf("ABOVE %d\n", rating);
    for(int i = 0; i < length; i++){
        if(players[i][1] > rating){
            OutputPlayer(players[i][0], players[i][1], i + 1);
        }
    }
    printf("\n");
    return;
}


void ReplacePlayer(int players[][2], int length){
    int jerseyNum;
    printf("Enter a jersey number:\n");
    scanf("%d", &jerseyNum);
    for(int i = 0; i < length; i++){
        if(players[i][0] == jerseyNum){
            players[i][0] = GetJerseyNumber(-1);
            players[i][1] = GetRating(-1);
            break;
        }
    }
    
    return;
}


char DisplayMenuAndGetChoice()
{
    char choice;
    printf("MENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n\n");
    printf("Choose an option:\n");
    scanf(" %c", &choice);

    return choice;

}

// Main Function
int main(int argc, char* argv[])
{
    int players[NUM_PLAYERS][2];
    char menuChoice;
    for(int i = 0; i < NUM_PLAYERS; i++){
        GetJerseyNumberAndRating(&players[i][0], &players[i][1], i+1);
    }

    OutputRoster(players, NUM_PLAYERS);
    //Menu loop

    do{
        menuChoice = DisplayMenuAndGetChoice();
        switch(menuChoice){
            case 'u':
                    UpdatePlayerRating(players, NUM_PLAYERS);
                break;
            case 'a':
                    OutputPlayerAboveRating(players, NUM_PLAYERS);
                break;
            case 'r':
                    ReplacePlayer(players, NUM_PLAYERS);
                break;
            case 'o':
                    OutputRoster(players, NUM_PLAYERS);
                break;
        }
    
    } while(menuChoice != 'q');


    return 0;
}
// Function Definitions


