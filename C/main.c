#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int valid_input(char c) {
    if (c == 'r' || c == 'p' || c == 's') return 1;
    else {
        printf("It's Not a valid input!!!\n");
        return 0;
    }
}

int find_index(char *arr, char c) {
    int i;
    for (i = 0; i < 3; i++) {
        if (arr[i] == c) return i;
    }
    return -1;
}

int main() {
    char pc_move, player_move;
    const char *RPS[] = {"Rock", "Paper", "Scissors"};
    char rps[3] = {'r', 'p', 's'};

    printf("Enter one of the options -> [r / p / s / e]: ");
    srand(time(NULL));

    while(1) {
        player_move = getchar();

        if (player_move == '\n') continue; // don't accept '\n' as a input!
        if (player_move == 'e') break; // exit!...

        if (valid_input(player_move)) {
            pc_move = rps[rand() % 3];
            printf("%s\n", RPS[find_index(rps, pc_move)]);

            if (player_move == pc_move) printf("[Tie!]\n");

            if (player_move == 'r') {
                if (pc_move == 's') printf("[Won!]\n");
                else if (pc_move == 'p') printf("[Lost!]\n");
            
            } else if (player_move == 'p') {
                if (pc_move == 'r') printf("[Won!]\n");
                else if (pc_move == 's') printf("[Lost!]\n");
            
            } else if (player_move == 's') {
                if (pc_move == 'p') printf("[Won!]\n");
                else if (pc_move == 'r') printf("[Lost!]\n");
            }

        printf("Enter one of the options -> [r / p / s / e]: ");
        }
    }

    printf("bye bye!\n");
    return 0;
}

