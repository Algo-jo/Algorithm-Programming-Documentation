#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkWinner(char row[]){
    
        if(row[0] == 'X' && row[1] == 'X' && row[2] == 'X') return 10;
        if(row[3] == 'X' && row[4] == 'X' && row[5] == 'X') return 10;
        if(row[6] == 'X' && row[7] == 'X' && row[8] == 'X') return 10;
        if(row[0] == 'X' && row[3] == 'X' && row[6] == 'X') return 10;
        if(row[1] == 'X' && row[4] == 'X' && row[7] == 'X') return 10;
        if(row[2] == 'X' && row[5] == 'X' && row[8] == 'X') return 10;
        if(row[0] == 'X' && row[4] == 'X' && row[8] == 'X') return 10;
        if(row[2] == 'X' && row[4] == 'X' && row[6] == 'X') return 10;

        if(row[0] == 'O' && row[1] == 'O' && row[2] == 'O') return -10;
        if(row[3] == 'O' && row[4] == 'O' && row[5] == 'O') return -10;
        if(row[6] == 'O' && row[7] == 'O' && row[8] == 'O') return -10;
        if(row[0] == 'O' && row[3] == 'O' && row[6] == 'O') return -10;
        if(row[1] == 'O' && row[4] == 'O' && row[7] == 'O') return -10;
        if(row[2] == 'O' && row[5] == 'O' && row[8] == 'O') return -10;
        if(row[0] == 'O' && row[4] == 'O' && row[8] == 'O') return -10;
        if(row[2] == 'O' && row[4] == 'O' && row[6] == 'O') return -10;
    
    return -1;
}

void print_board(char row[]){
    printf(" %c | %c | %c\n", row[0], row[1], row[2]);
    printf("-----------\n");
    printf(" %c | %c | %c\n", row[3], row[4], row[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", row[6], row[7], row[8]);
}

int main(){
    char row[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int end = -1;
    srand(time(NULL));
    print_board(row);
    int result;
    int counter = 0;

    while(1){
        int enemy_turn;
        int your_turn;

        while(your_turn < 1 || your_turn > 9 || row[your_turn - 1] != ' '){
            printf("Choose the location: ");
            scanf("%d", &your_turn);
        }
        row[your_turn - 1] = 'X';
        result = checkWinner(row);
        if(result == 10){
            print_board(row);
            printf("YOU ARE the WINNER\n");
            break;
        }
        counter++;
        if(counter == 5){
            print_board(row);
            printf("ITS IS A TIE\n");
            break;
        }

        enemy_turn = rand() % 9;
        while(row[enemy_turn] != ' ') enemy_turn = rand() % 9;
        row[enemy_turn] = 'O';
        if(result == -10){
            print_board(row);
            printf("AI is the WINNER\n");
            break;
        }
        print_board(row);
    }
    return 0;
}