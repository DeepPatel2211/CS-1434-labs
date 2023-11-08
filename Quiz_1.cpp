   /* Deep Patel
   Programming Fundamentals 
   1436
   008
   09/29/23
   09/29/23
   09/29/23

    This program will have a user pick a package and then based on thier hours usage of the package 
    it will calculate the total cost for thier monthly bill from that package and hours used. 
   */

#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <iomanip>

using namespace std;

int main(){

    //initialized which package the user will pick variable.
    char package;

    double package_a = 9.95, package_b = 14.45, package_c = 19.95;
    cout << "Package A: For $9.95 per month, 10 hours of access are provided. Additional hours are $2.00 per hour." << endl;
    cout << "Package B: For $14.95 per month, 20 hours of access are provided. Additional hours are $1.00 per hour." << endl;
    cout << "Package C: For $19.95 per month, unlimited access is provided." << endl;

    cout << "Which package have you purchased? ";
    cin >> package;

    int hours; // initialized total amount of hours used variable.

    //if statement that calculates the humber of hours only if they pick on of the following packages (A - C)
    if(package == 'A' || package == 'a' || package == 'B' || package == 'b' || package == 'C' || package == 'c'){
    cout << "Number of hours were used: ";
    const int MIN = 1, MAX = 1000;
    unsigned int seed = time(0);
    srand(seed);
    hours = (rand() % (MAX - MIN + 1) + MIN);
    cout << hours << endl;
    }

    else{ // else statement that print invalid package input if the user doesnt chose packages A - C.
        cout << "Invalid package input";
    }

    // intialized total amount for monthly bill variable.
    double total_amnt;
    
    //if statement that only calculates total cost if the hours were over 744
    if(hours > 744){
       cout << "Invalid amount of hours";
    }

    else if(hours <= 744){

        // switch statement that calculates cost of monthly bill based on the package the user chose. 
        switch(package){

            case 'a':
            case 'A': if(hours <= 10){ // if statement that calculates the total cost if they chose package A and used 10 hours or less.
                      total_amnt = package_a * 1;
                      cout << "With your package A, you used a total of " << hours << " hours and the monthly bill will be $";
                      cout << setprecision(2) << fixed << total_amnt;
                      }
                      else if(hours > 10){ // else if state that calculates the total cost if they chose package A and exceeded usage of 10 hours.
                      total_amnt = (package_a * 1) + (2 * (hours - 10));
                      cout << "With your package A, you used a total of " << hours << " hours and the monthly bill will be $";
                      cout << setprecision(2) << fixed << total_amnt;
                      }
                      break; 
            
            case 'b':
            case 'B': if(hours <= 20){ // if statement that calculates the total cost if they have chose package B and use 20 hours or less.
                      total_amnt = package_b;
                      cout << "With your package B, you used a total of " << hours << " hours and the monthly bill will be $";
                      cout << setprecision(2) << fixed << total_amnt;
                      }
                      else if(hours > 20){ // else if statement that calculates total cost if they chose package B and exceeded usage of 20 hours.
                      total_amnt = (package_b * 1) + (1 * (hours - 20));
                      cout << "With your package B, you used a total of " << hours << " hours and the monthly bill will be $";
                      cout << setprecision(2) << fixed << total_amnt;
                      }
                      break;
            

            case 'c':
            case 'C': total_amnt = package_c * 1; // calculates pacakge C cost.
                      cout << "With your package C, you used a total of " << hours << " hours and the monthly bill will be $";
                      cout << setprecision(2) << fixed << total_amnt;
                      break;

        }
    }

    return 0;

}