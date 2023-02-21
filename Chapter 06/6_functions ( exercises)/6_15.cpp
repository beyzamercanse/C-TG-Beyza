#include  <iostream>
using namespace std;

// function declaration
bool isValid(int);


int main(){
    int value =  20000;
    if (isValid(value))
        cout << "The value is within range.\n";
    else
        cout << "The value is out of range.\n";

    return 0;
}

bool isValid(int number) 
{
    bool status;
    if (number >= 1 && number <= 100)
        status = true; 
    else
        status = false; 
    
    return status;
}

