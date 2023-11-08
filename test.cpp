#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream a;
    ifstream b;
    int num, count = 0;
    while(b >> num)
    count++;

    if(count == 0){
        cout << "file is empty" << endl;
    }
}