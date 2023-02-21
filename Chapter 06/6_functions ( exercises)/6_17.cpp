#include <iostream>
using namespace std;


// Function prototype
void anotherFunction(); 


int main(){

    int num = 1; // Local variable
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;

    return 0;
}

void anotherFunction()
{
    int num=20; //local variable
    cout << "In anotherFunction, num is " << num << endl;

}

// Even though there are two variables named num, 
// the program can only “see” one of them at a time because they are in different functions. 
// When the program is executing in main, the num variable defined in main is visible. 
// When anotherFunction is called, however, 
// only variables defined inside it are visible, so the num variable in main is hidden.

//  any value stored in a local variable is lost between calls to the function in which the variable is declared.