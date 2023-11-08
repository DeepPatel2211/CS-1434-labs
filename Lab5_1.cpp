/*	Deep Patel
	Programming Fundamentals
	1436
	008
	10/12/23
	10/06/23
	10/06/23
	
	This program will calculate how much a person would earn over a period of
	time if his or her salary is one penny the first day and two pennies the second day,
	and continues to double each day.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    

	cout << "----  Hit any key to start: ";
	
	
	while(true){ // infinite while loop that keeps going until user quits the program manually.

		int days = 1;
		double days_pay; //variable initialized for the amount of days doubled.
		double pay = 0.01, total = 0;

        cin.get(); //statement that lets the user input any key to start.

		cout << "How many days will the pay double? ";
		cin >> days_pay; //takes in the input for the amount of days to be doubled.
		
        // if statement that the program only runs if the amount of days is greater than or equal to 1.
		if(days_pay < 1){
			cout << "You can't have number of days be less than 1" << endl;
		}
	
		else{

            cout << "\nDay " << setw(21) << "Total Pay" << endl;
		    cout << "--------------------------------" << endl;

			while(days <= days_pay){ // while statement that calculates the pay from day 1 to the amount of day inputed.
                
                cout << days << "\t\t" << "$   " << setprecision(2) << fixed << pay << endl;		
				total += pay; // declaring total to the accumalted amount of money during the amount of days.
				pay *= 2; // declaring pay to the doubled amount each time.

                days++; // increments the while loop to make sure it passes the test.
			}
			
			cout << "--------------------------------" << endl;
			cout << "Total\t\t" << "$   " << total << endl;
            
		}
            cout << "\n----  Hit any key to continue: ";
            cin.get(); // statement that lets user enter a key to continue the program.
		
	}

	return 0;
}