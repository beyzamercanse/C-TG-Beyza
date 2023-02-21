#include <iostream>
using namespace std;

// Function prototype
void anotherFunction();

//global variable
int num = 2;

int main(){

    cout << "in main, num is: " << num << endl;
    anotherFunction();
    cout << "back in main, num is: "<<  num <<  endl;

    return 0;
}

void anotherFunction(){
    cout << "in anotherFunction , num is: " << num << endl;
    num=50;
    cout << "but, it is now changed to: " << num << endl;
}

/*

in main, num is: 2
in anotherFunction , num is: 2
but, it is now changed to: 50
back in main, num is: 50

*/

// 375