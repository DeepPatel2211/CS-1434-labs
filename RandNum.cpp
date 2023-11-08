#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    const int MIN = 1, MAX = 500;
    unsigned int seed = time(0);
    srand(seed);
    int num = (rand()% (MAX - MIN + 1) + MIN);
    
    cout<< num << endl;


    return 0;

    
}
