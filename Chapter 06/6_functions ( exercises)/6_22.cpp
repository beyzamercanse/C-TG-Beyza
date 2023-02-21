#include <iostream>
using namespace std;

// Function prototype
void showStatic();

int main(){
    // Call the showStatic function five times. 
    for (int count = 0; count < 5; count++)
        showStatic();

    return 0;
}

void showStatic() 
{
    static int statNum;
    cout << "statNum is " << statNum << endl;
    statNum++; 
}

/*

statNum is 0
statNum is 1
statNum is 2
statNum is 3
statNum is 4

*/