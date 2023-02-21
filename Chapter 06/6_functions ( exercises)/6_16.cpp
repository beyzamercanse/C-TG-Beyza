#include <iostream>
using namespace  std;


// Function prototype
bool isEven(long int);

int main(){

    long int val;

    //  get the number from user
    cout << "enter an integer and I will tell you: ";
    cout << "if it is even or odd: ";
    cin>>val;

    if (isEven(val))
        cout << val << " is even. \n";
    else
        cout << val << " id odd.\n";
    return 0;
}

bool isEven(long int number)
{
    bool status; // declare

    if (number % 2 == 0)
        status = true;
    else
        status = false;
    
    return status;
}

