import random


def valid_input(x):
    if x == 'r' or x == 'p' or x == 's':
        return True
    else:
        print("It's Not a valid input!!!")

RPS = ["Rock", "Paper", "Scissors"]
rps = ['r', 'p', 's']

if __name__ == "__main__":
    
    while True:
        player_move = input("Enter one of the options -> [r / p / s / e]: ")
        
        if player_move == "e":
            exit("bye bye!")
            
        if valid_input(player_move):
            pc_move = random.choice(rps)
            print(RPS[rps.index(pc_move)])
            
            if player_move == pc_move:
                print("[Tie!]")
            
            elif player_move == 'r':
                if pc_move == 'p':
                    print("[Lost!]")
                elif pc_move == 's':
                    print("[Won!]")
                
            elif player_move == 'p':
                if pc_move == 's':
                    print("[Lost!]")
                elif pc_move == 'r':
                    print("[Won!]")
                    
            elif player_move == 's':
                if pc_move == 'r':
                    print("[Lost!]")
                elif pc_move == 'p':
                    print("[Won!]")
                
