import java.util.Random;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            char[] rps = {'r', 'p', 's'};
            String[] RPS = {"Rock", "Paper", "Scissors"};
            char pc_move, player_move = ' ';
            String input;

            while (true) {
                System.out.print("Enter one of the options -> [r / p / s / e]: ");
                input = scanner.nextLine();
                player_move = input.charAt(0);

                if (validInput(player_move) && validInputLength(input)) {
                    pc_move = rps[new Random().nextInt(rps.length)];
                    System.out.println(RPS[new String(rps).indexOf(pc_move)]);

                    if (player_move == pc_move) {
                        System.out.println("[Tie!]");
                        
                    } else if (player_move == 'r') {
                        if (pc_move == 'p') {
                            System.out.println("[Lost!]");
                        } else if (pc_move == 's') {
                            System.out.println("[Won!]");
                        }
                        
                    } else if (player_move == 'p') {
                        if (pc_move == 's') {
                            System.out.println("[Lost!]");
                        } else if (pc_move == 'r') {
                            System.out.println("[Won!]");
                        }

                    } else if (player_move == 's') {
                        if (pc_move == 'r') {
                            System.out.println("[Lost!]");
                        } else if (pc_move == 'p') {
                            System.out.println("[Won!]");
                        }                    
                    }
                } else if (player_move == 'e') {
                    System.out.println("bye bye!");
                    break;
                }

            }
        }
    }

    public static boolean validInput(char c) {
        if (c == 'r' || c == 'p' || c == 's') return true;
        else {
            System.out.println("It's Not a valid option!!!");
            return false;
        }
    }

    public static boolean validInputLength(String w) {
        if (w.length() == 1) return true;
        else {
            System.out.println("It's Not a valid option!!!");
            return false;
        }
    }
}