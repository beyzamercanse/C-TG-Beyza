#include <iostream>
using namespace std;

// Function Prototype
void displayValue(int);

int main(){
    cout << " I am passing several values to displayValue.\n ";
    displayValue(5);
    displayValue(10);
    displayValue(25);
    cout << " now i am  back in main. \n";

    return 0;
}

void displayValue(int num)
{
    cout << "the value  is " << num << endl;
}