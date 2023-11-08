/* Deep Patel 
   Programming fundamentals
   1436
   008
   11/02/23
   10/27/23
   10/27/23
   program that asks the user to enter today’s sales for five stores. The
   program should then display a bar graph comparing each store’s sales.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string printAstricts(double); // function that returns the amount of astricts 
void printResults(string, string, string, string, string); // function that displays the astricts
void dataToFile(string, string, string, string, string); // function that sends the astrict data to the file.

int main(){
    double store_one, store_two, store_three, store_four, store_five;  // variables that store the value of the sales input for each store
    string saleOne, saleTwo, saleThree, saleFour, saleFive; // variables that store the value of the amount of astricts from the function.

    cout << "Enter today's sale for store 1: ";
    cin >> store_one;

    cout << "Enter today's sale for store 2: ";
    cin >> store_two;

    cout << "Enter today's sale for store 3: ";
    cin >> store_three;

    cout << "Enter today's sale for store 4: ";
    cin >> store_four;

    cout << "Enter today's sale for store 5: ";
    cin >> store_five;
    
    saleOne = printAstricts(store_one); // stores the number of sale 1 astricts
    saleTwo = printAstricts(store_two); // stores the number of sale 2 astricts
    saleThree = printAstricts(store_three); // stores the number of sale 3 astricts
    saleFour = printAstricts(store_four); // stores the number of sale 4 astricts
    saleFive = printAstricts(store_five); // stores the number of sale 5 astricts

    printResults(saleOne, saleTwo, saleThree, saleFour, saleFive); // function that prints the amount of astricts
    dataToFile(saleOne, saleTwo, saleThree, saleFour, saleFive); // function that sends the amount of astricts for each sale to the file.

    return 0;
}

string printAstricts(double sales){  // function that returns the amount of astricts 
    string astricts;
    for(int x = 1; x <= (sales/100); x ++){
        astricts += "*";
    }
    return astricts;
}

void printResults(string saleOne, string saleTwo, string saleThree, string saleFour, string saleFive){ // function that displays the astricts
    cout << "Sales Bar Chart, Each * = $100" << endl;
    cout << "Store 1: " << saleOne << endl;
    cout << "Store 2: " << saleTwo << endl;
    cout << "Store 3: " << saleThree << endl;
    cout << "Store 4: " << saleFour << endl;
    cout << "Store 5: " << saleFive << endl;
}

void dataToFile(string saleOne, string saleTwo, string saleThree, string saleFour, string saleFive){ // function that sends the astrict data to the file.
    ofstream outfile;
    outfile.open("salesBarChart.txt");
    if(outfile){ // if statement for which the data only goes in the file if the file is open.
    outfile << "Sales Bar Chart, Each * = $100" << endl;
    outfile << "Store 1: " << saleOne << endl;
    outfile << "Store 2: " << saleTwo << endl;
    outfile << "Store 3: " << saleThree << endl;
    outfile << "Store 4: " << saleFour << endl;
    outfile << "Store 5: " << saleFive << endl;
    outfile.close();
    cout << "All the data has gone to the file, salesBarChart.txt";
    }
    else{
        cout << "error opening file";
    }
    
}