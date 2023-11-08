/* Deep Patel
   Programming Fundamentals
   1436
   008
   10/20/23
   10/20/23
   10/20/23
*/

#include <iostream>

using namespace std;

int main(){

        char choice;
        cout << "Enter A for program 1, B for program 2, or C to quit the program: ";
        cin >> choice;
    do {
        char convert;
        int x, y, z, sum = 0, number, Ascii = 0;


        switch(choice){

            case 'a':
            case 'A': cout << "Enter a positive number: ";
                      cin >> number;
                      if(number > 0){
                        for(x = 1; x <= number; ++x){
                            sum+=x;
                        }
                        cout << "The sum of all the integers from 1 to " << number << " is " << sum;
                      }
                      else
                      cout << "Please do not enter a negative number";
                      break;
            
            case 'b':
            case 'B': cout << "Program will print all the ASCII values from 0 to 127" << endl;
                      for(y = 1; y <=8; y++){
                        cout << y << "\t";
                        for(z = 0; z < 16; z++){
                            convert = static_cast<char>(Ascii);
                            cout << convert << "\t";
                            Ascii++;
                        }
                        cout << endl;
                      }
                        break;    
        }
         cout << endl;
         cout << "Enter A for program 1, B for program 2, or C to quit the program: ";
         cin >> choice;

         if(choice == 'c' || choice == 'C')
         break;

     } while (choice != 'C' || choice != 'c');

    return 0;
}