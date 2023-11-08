/* Deep Patel
   Programming Fundamentals
   1436
   008
   10/19/23
   10/15/23
   10/15/23
   Write a program that generates a random number and asks the user to guess what the number is. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    // declaring the variable for the number of guesses.
    int count = 0;
    // declaring the random number generator
    unsigned int seed = time(0);
    srand(seed);
    const int MIN = 25, MAX = 75;
    int guess;
    int randomNum = (rand() % (MAX - MIN + 1) + MIN);
    cout << "Try to guess the random number between 25 and 75, \nwhat is your guess: ";
    cin >> guess; // takes in the guess for the random number.
    count = 1;

    // while loop which with a sentinal which keeps going until user enters the right random numbers.
    while(guess != randomNum){

        // if statement for if the user enters a guess less than the random number
        if(guess < randomNum)
        cout << "You guessed to low, try again." << endl;

        // else if statment for if the user enters a guess more than random number.
        else if(guess > randomNum)
        cout << "You guessed to high, try again" << endl;

        // takes in the users guess.
        cout <<  "what is your guess: ";
        cin >> guess;
        
        //incrementer for the total amount of guesses
        count++;
    }

    // if statement for if the guess is the random number then tells user they got it right and the amount of guesses.
    if(guess == randomNum){ 
        cout << "you guessed the correct number." << endl;  
        cout << "you took " << count << " guess(es)";
    } 

    return 0;
}