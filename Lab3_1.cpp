 
/* 
 
Deep Patel
 
Programming Fundamentals
 
CS 1436
 
008
 
09/21/2023
 
09/15/2023
 
09/15/2023
 
The program asks for the principal, the interest rate, and the number of
 
times the interest is compounded and displays the amount in savings and total interest in dollars.
 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
 
 
// declared the users input to tell us the principle.
 
double principle;
 
 
//declared for the user to tell us the number of times compounded.
 
int timesCompounded;
 
 
// declared the variable to tells the amount in savigns the user has, and the amount in interest they recieve.
 
double amntSavings;
 
double interestamnt;
 
 
// declared the interest rate.
 
double interestRate;
 
 
 
 
cout << "Interest Rate: ";
 
cin >> interestRate; 
//intializes the percentage interest rate, takes in value from the user.
 
 
cout << "Times Compounded: ";
 
cin >> timesCompounded;
 
 
cout << "Principle: " << "$" << setprecision(2) << fixed;
 
cin >> principle;
 
 
// intialized the variable to have the calculations of the compound interest formula to tell us the amount in savings.
 
amntSavings = principle * pow(1 + (
(interestRate /100)/timesCompounded), timesCompounded);
 
 
// initialized the variable to tell us the amount in additionaly gained from his principle.
 
interestamnt = amntSavings - principle;
 
 
cout << "Interest: " << "$" << setprecision(2) << fixed << interestamnt;
 
cout << endl; 
 
 
cout << "Amount in savings: " << "$" << setprecision(2) << fixed << amntSavings;
 
cout << endl; 
 
return 0;
 
}
