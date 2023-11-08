/* Deep Patel 
   Programming fundamentals
   1436
   008
   11/02/23
   10/27/23
   10/27/23
   prgoram that lets the user play the game of rock,
   paper, scissors against the computer 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int userChoice(); // function to get the user to input a choice from (1-3) for 1.rock, 2.paper, or 3.scissor
string userSelection(string, string, string, int); // function that returns the input the user chose to either rock, paper, or scissor
int whoWon(string, string, string, string, string); // function that returns a value for 3 cases, win, lose, or tie;
string compSelect(int, string, string, string); // function that returns a value for what the computer chose.

int main(){

    //all string variables to take in the values of the return functions and to assign the computer or user, rock, paper, or scissor.
    string compChoice, userSelect, rock = "Rock", paper = "Paper", scissor = "Scissors"; 

    // all int variables to take in the return type from functions, will help user select their weapon and determine whether they won, or lost.
    int userNum, situation;

    // all the statements to make a random number
    unsigned int seed = time(0);
    const int MIN = 1, MAX = 3;
    srand(seed);
    int randomNum = (rand() % (MAX - MIN + 1) + MIN);

    // statement to take the return value of the functions
    compChoice = compSelect(randomNum, rock, paper, scissor); // variable that takes in the return value string for the computer choosing his weapon.
    userNum = userChoice(); // variable that takes in the return value for the user int selecting which weapon
    userSelect = userSelection(rock, paper, scissor, userNum); // variable that takes in the return value string for assigning the weapon to the user.
    situation = whoWon(userSelect, compChoice, rock, paper, scissor); // variable that takes in the return value int for determining who won
    
    // switch statement which determines based on the situation of winning, loosing, or tie
    switch(situation){
        
        // case in which the user won
        case 1: cout << "you chose " << userSelect << " the computer chose " << compChoice << endl;
                cout << "CONGRATULATIONS!! YOU WON";
                break;

        // case in which the user lost
        case 2: cout << "you chose " << userSelect << " the computer chose " << compChoice << endl;
                cout << "Good try! Better luck next time.";
                break;

        // case in which the user tied.
        case 3: bool tie = true;
                while(tie){ // while statement that keeps going if there is a tie.
                cout << "you chose " << userSelect << " the computer chose " << compChoice << endl;
                cout << "you tied, try again." << endl;
                randomNum = (rand() % (MAX - MIN + 1) + MIN);
                compChoice = compSelect(randomNum, rock, paper, scissor);
                userNum = userChoice();
                userSelect = userSelection(rock, paper, scissor, userNum);
                situation = whoWon(userSelect, compChoice, rock, paper, scissor);
                
                if(situation == 1){ // if statement that when they computer and user go again, if the user wins, the loop ends.
                cout << "you chose " << userSelect << " the computer chose " << compChoice << endl;
                cout << "CONGRATULATIONS!! YOU WON";
                tie = false;
                }
                else if(situation == 2){ // else if statement that when they computer and user go again, if the computer wins, the loop ends.
                cout << "you chose " << userSelect << " the computer chose " << compChoice << endl;
                cout << "Good try! Better luck next time.";
                tie = false;
                }
            }
            break;
    }

    return 0;
}


int userChoice(){ // function to get the user to input a choice from (1-3) for 1.rock, 2.paper, or 3.scissor
    cout << "Enter your choice(1-3), 1. Rock, 2. Paper, 3. Scissor: ";
    int choice;
    cin >> choice;
    if(choice < 1 || choice > 3){
    while(choice != 1 || choice != 2 || choice != 3){ // while loop with a sentinal that keeps going until user enter choice in range
        cout << "please enter a choice from (1 - 3): ";
        cin >> choice;
        if(choice >= 1 && choice <= 3)
        break;
        }
        
    }

    return choice;
}

string userSelection(string rock, string paper, string scissor, int userNum){ // function that returns the input the user chose to either rock, paper, or scissor
    string userSelect;
    if(userNum == 1){
        userSelect = rock;
        return userSelect;
    }

    else if(userNum == 2){
        userSelect = paper;
        return userSelect;
    }
    else if(userNum == 3){
        userSelect = scissor;
        return userSelect;
    }

}

int whoWon(string userChoice, string compChoice, string rock, string paper, string scissor){ // function that returns a value for 3 cases, win, lose, or tie.
    int situation;
    if(userChoice == rock && compChoice == scissor){
        situation = 1;
        return situation;
    }

    else if(userChoice == rock && compChoice == paper){
        situation = 2;
        return situation;
    }
    else if(userChoice == paper && compChoice == rock){
        situation = 1;
        return situation;
    }

    else if(userChoice == paper && compChoice == scissor){
        situation = 2;
        return situation;
    }

    else if(userChoice == scissor && compChoice == rock){
        situation = 2;
        return situation;
    }

    else if(userChoice == scissor && compChoice == paper){
        situation = 1;
        return situation;
    }

    else if(userChoice == compChoice){
        situation = 3;
        return situation;
    }
}

string compSelect(int randomNum, string rock, string paper, string scissor){ // function that returns a value for what the computer chose.
    string compChoice;
    if(randomNum == 1){
        compChoice = rock;
        return compChoice;
    }

    else if(randomNum == 2){
        compChoice = paper;
        return compChoice;
    }
    else if(randomNum == 3){
        compChoice = scissor;
        return compChoice;
    }
}