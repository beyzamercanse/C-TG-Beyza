#include <iostream>
using namespace std;

// function prototype
void changeMe(int);

int main(){
    int number = 12;
    // Display the value in number.
    cout << "number is " << number << endl;


    // Call changeMe, passing the value in number  as an argument.
    changeMe(number);


    // Display the value in number again.
    cout << "Now back in main again, the value of ";
    cout << "number is " << number << endl;

    return 0;
}

void changeMe(int myValue)
{
    // Change the value of myValue to 0.
    myValue = 0;

    // Display the value in myValue.
    cout << "Now the value is " << myValue << endl;

}