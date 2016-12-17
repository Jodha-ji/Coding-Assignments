// *******************************
// Author - Harshit Prasad
// 17.12.2016
// Tic Tac Toe Game - C language
// *******************************

#include <stdio.h>
#include <conio.h>
char sec[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board();
int check();

int main()
{
	// local declarations
    int i, num, player=1;
    char mark;
    do {
        board(); // function call
        player = (player % 2) ? 1 : 2;
        printf("Player %d enter a number : ", player);
        scanf("%d", &num); // player 1 or player 2 enters a number where he wants to cross or circle

        mark = (player==1) ? 'X' : 'O'; // if player is 1 it will cross else circle
        // condition to mark that number entered by the player 1 or player 2
        if(num==1 && sec[1]=='1')
            sec[1] = mark;
        else if(num==2 && sec[2] == '2')
            sec[2]= mark;
        else if(num==3 && sec[3]=='3')
            sec[3] = mark;
        else if(num==4 && sec[4]=='4')
            sec[4] = mark;
        else if(num==5 && sec[5] == '5')
            sec[5]= mark;
        else if(num==6 && sec[6]=='6')
            sec[6] = mark;
        else if(num==7 && sec[7]=='7')
            sec[7] = mark;
        else if(num==8 && sec[8]=='8')
            sec[8] = mark;
        else if(num==9 && sec[9]=='9')
            sec[9]=mark;
        else {
            printf("Invalid number\n");
            player--;
            getch();
        }
    i = check();
    player++;
    }while(i==-1);

    board();

    if(i==1)
        printf("=>Player %d wins", --player);
    else
        printf("\nGame Draw");

    getch();
    return 0;
}
// ***************************************
// 1 means Game is over and results are displayed.
// 0 means Game is over and results are not displayed.
// -1 means Game is still going on.
// ***************************************
int check()
{
        // Checks all the conditions
        if(sec[1]==sec[2] && sec[2]==sec[3])
            return 1;
        else if(sec[4]==sec[5] && sec[5]==sec[6])
                return 1;
        else if(sec[7]==sec[8] && sec[8]==sec[9])
                return 1;
        else if(sec[1]==sec[4] && sec[4]==sec[7])
                return 1;
        else if(sec[2]==sec[5] && sec[5]==sec[8])
                return 1;
        else if(sec[3]==sec[6] && sec[6]==sec[9])
                return 1;
        else if (sec[1]!='1' && sec[2]!='2' && sec[3]!='3' && sec[4]!='4' &&
                 sec[5]!='5' && sec[6]!='6' && sec[7]!='7' && sec[8]!='8' && sec[9]!='9')
                return 0;
        else{
            return -1;
        }
}
// ************************************
// Designing of the Tic-Tac-Toe board.
// ************************************

void board()
{
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sec[1], sec[2], sec[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", sec[4], sec[5], sec[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", sec[7], sec[8], sec[9]);

    printf("     |     |     \n\n");
}