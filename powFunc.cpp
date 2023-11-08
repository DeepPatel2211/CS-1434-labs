#include <iostream>

using namespace std;

// func prototype
double Powerr(double, int);

int main(){

	double base;
	int exponent;
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> exponent;

	double result = Powerr(base, exponent);

	cout << base << "^" << exponent << " = " << result << endl;
	return 0;
}


double Powerr(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    } 

	else if (exponent > 0) {
        double result = 1.0;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    } 

	else {
        double result = 1.0;
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
        return result;
    }
}