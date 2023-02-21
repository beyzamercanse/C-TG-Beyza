#include <iostream>
using namespace std;

// function declarations
void first(int);
void sec(int sec_num);

int main(){

    cout << "I am passing to main function .\n";
    first(78);
    sec(99);
    return 0;
}

void first(int first_num){
    cout << "the first number is " << first_num << endl;
}

void sec(int sec_num){
    cout << "the second number is " << sec_num << endl;
}