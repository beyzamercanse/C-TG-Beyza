#include<iostream>
using namespace std;

void first()
{
    cout << "I am now inside the function first.\n";
}

void second()
{
    cout << " I am now inside the function second.\n";
}

int main(){
    cout << " now this is main function. call first and second functions : \n";
    first();
    second();
    cout << "end" << endl;

    return 0;
}