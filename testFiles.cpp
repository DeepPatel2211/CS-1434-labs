#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string> 

using namespace std;

int main(){

    unsigned int seed = time(0);
    srand(seed);
    const int MIN = 1, MAX = 100;

    ofstream outfile;
    ifstream infile;
    int numbers, sum, count = 0;
    double average; 
    string filename;

    cout << "Enter the filename: ";
    getline(cin,filename);

    outfile.open(filename.c_str());
    
    for(int x = 1; x <= 4; x++){
        int randomNum = (rand()% (MAX - MIN + 1) + MIN);
        outfile << randomNum << endl;
    }
    outfile.close();
    
    infile.open(filename.c_str());
    while(infile >> numbers){
        cout << numbers << endl;
        sum += numbers;
        count++;
    }
    infile.close();

    average = static_cast<double>(sum)/count;

    cout << "The average of the random numbers is: " << setprecision(2) << fixed << average << endl;
    return 0;
}