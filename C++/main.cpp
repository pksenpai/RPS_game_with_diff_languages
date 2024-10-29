#include <iostream>
#include <cstdlib>
using namespace std;


bool valid_input(char c) {
    if (c == 'r' || c == 'p' || c == 's') return true;
    else {
        cout << "It's Not a valid input!!!" << endl;
        return false;
    }
}

int find_index(char *arr, char c) {
    for (int i = 0; i < 3; i++) {
        if (arr[i] == c) return i;
    }
    return -1;
}

int main() {
    char pc_move, player_move;
    string RPS[3] = {"Rock", "Paper", "Scissors"};
    char rps[3] = {'r', 'p', 's'};

    cout << "Enter one of the options -> [r / p / s / e]: ";
    while(true) {
        player_move = getchar();

        if (player_move == '\n') continue; // don't accept '\n' as a input!
        if (player_move == 'e') break; // exit!...

        if (valid_input(player_move)) {
            pc_move = rps[rand() % 3];
            cout << RPS[find_index(rps, pc_move)] << endl;

            if (player_move == pc_move) cout << "[Tie!]" << endl;

            if (player_move == 'r') {
                if (pc_move == 's') cout << "[Won!]" << endl;
                else if (pc_move == 'p') cout << "[Lost!]" << endl;
            
            } else if (player_move == 'p') {
                if (pc_move == 'r') cout << "[Won!]" << endl;
                else if (pc_move == 's') cout << "[Lost!]" << endl;
            
            } else if (player_move == 's') {
                if (pc_move == 'p') cout << "[Won!]" << endl;
                else if (pc_move == 'r') cout << "[Lost!]" << endl;
            }

        cout << "Enter one of the options -> [r / p / s / e]: ";
        }
    }

    cout << "bye bye!" << endl;
    return 0;
}

