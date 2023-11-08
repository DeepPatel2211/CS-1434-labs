/*  Deep Patel
    Programming Fundamentals
    1436
    008
    11/3/23
    11/3/23
    11/3/23
*/

#include <iostream>
#include <cmath>

using namespace std;

int minutes();
void caloriesBurned(int);
double kineticEnergy(double, double);
double m();
double v();

int main(){
    int choice, mins; 
    double mass, velocity, KE;

    cout << "Enter the choice 1 to see the number of calories burned"
         << " or enter the choice 2 to calculate the amount of Kinetic energy. ";
    
    cin >> choice;


    if(choice == 1 || choice == 2){
        switch(choice){
            case 1: mins = minutes();
                    caloriesBurned(mins);
                    break;

            case 2:
                    mass = m();
                    velocity = v();
                    KE = kineticEnergy(mass, velocity);
                    cout << "The Kinetic energy is " << KE << " J";
                    break;
        } 
    }

    else{
            cout << "Please enter a valid choice (1-2)";   
        } 
        
    return 0;
}

int minutes(){
    int mins;
    cout << "How many minutes did you run for? ";
    cin >> mins;
    return mins;
}

double m(){
    double mass;
    cout << "What is the mass(kilograms) ";
    cin  >> mass;
    return mass;
}

double v(){
    double velocity;
    cout << "What is the velocity(meters/second) ";
    cin >> velocity;
    return velocity;
}

void caloriesBurned(int mins){
    double calories = 0;
    for(int i = 1; i <= mins; i++){
        calories += 3.9;
    }
    cout << "You burned " << calories << " calories";
}

double kineticEnergy(double mass, double velocity){
    double KE = (.5) * (mass) * (pow(velocity,2));
    return KE;
}