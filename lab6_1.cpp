/* Deep Patel
   Programming Fundamentals
   1436
   008
   10/19/23
   10/15/23
   10/15/23
program that asks the user to enter the population of ten Texas Cities. The program
should then display a bar graph comparing population of the ten cities. 
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Enter the population of ten Texas Cities." << endl;
    //declared all the variables for the populations.
    int population_one, population_two, population_three, population_four, population_five, population_six, population_seven, population_eieght, population_nine, population_ten, count_one;

    // all the statements to ask for each population of the 10 cities
    cout << "Enter the population of Texas City 1: ";
    cin >> population_one;

    cout << "Enter the population of Texas City 2: ";
    cin >> population_two;

    cout << "Enter the population of Texas City 3: ";
    cin >> population_three;

    cout << "Enter the population of Texas City 4: ";
    cin >> population_four;

    cout << "Enter the population of Texas City 5: ";
    cin >> population_five;

    cout << "Enter the population of Texas City 6: ";
    cin >> population_six;

    cout << "Enter the population of Texas City 7: ";
    cin >> population_seven;

    cout << "Enter the population of Texas City 8: ";
    cin >> population_eieght;

    cout << "Enter the population of Texas City 9: ";
    cin >> population_nine;

    cout << "Enter the population of Texas City 10: ";
    cin >> population_ten;

    cout << "..." << "\n...." << "\n...." << endl;

    cout << "POPULATION BAR CHART" << "\n(EACH *= 1000)" << endl;
    
    // all the for loops to display theastricks for each city population.
    cout << "CITY 1: ";                                                     
    for(count_one = 1; count_one <= (population_one/1000); count_one++)         
        cout << "*";
        cout << endl;

    cout << "CITY 2: ";  
    for(count_one = 1; count_one <= (population_two/1000); count_one++)
        cout << "*";
        cout << endl;

    cout << "CITY 3: ";  
    for(count_one = 1; count_one <= (population_three/1000); count_one++)
        cout << "*";
        cout << endl;

    cout << "CITY 4: ";  
    for(count_one = 1; count_one <= (population_four/1000); count_one++)
        cout << "*";
        cout << endl;

    cout << "CITY 5: ";  
    for(count_one = 1; count_one <= (population_five/1000); count_one++)
        cout << "*";
        cout << endl;
    
    cout << "CITY 6: ";  
    for(count_one = 1; count_one <= (population_six/1000); count_one++)
        cout << "*";
        cout << endl;

    cout << "CITY 7: ";  
    for(count_one = 1; count_one <= (population_seven/1000); count_one++)
        cout << "*";
        cout << endl;

    cout << "CITY 8: ";  
    for(count_one = 1; count_one <= (population_eieght/1000); count_one++)
        cout << "*";
        cout << endl;

    cout << "CITY 9: ";  
    for(count_one = 1; count_one <= (population_nine/1000); count_one++)
        cout << "*";
        cout << endl;
    
    cout << "CITY 10:";  
    for(count_one = 1; count_one <= (population_ten/1000); count_one++)
        cout << "*";
        cout << endl;

        cout << "...." << "\n...." << "\n....." << endl;                     

    return 0;
}   