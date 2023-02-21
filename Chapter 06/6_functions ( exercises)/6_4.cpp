#include <iostream>
using namespace std;

void deeper(){

    cout << "i am now inside the function deeper.\n";
}

void deep(){

    cout << "I am now inside the function deep. \n";
    deeper(); //call function deeper
    cout << " back to the deep.\n";

}

int main(){
    cout << "I am starting in function main.\n";
    deep();
    cout << " back at the main function again.  \n ";
    return 0;
}