#include <iostream>
using namespace std;

// function prototypes
void first();
void second();


int main()
{
    cout << " I am starting function main. " << endl;
    first();
    second();
    return 0;
}

void first(){
    cout << "please state the first function. \n";
    int first_var;
    cin>>first_var;
}

void second(){
    cout <<  "please state the second function. \n";
    int sec_var;
    cin>>sec_var;
}
