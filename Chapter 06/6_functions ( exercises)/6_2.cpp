#include <iostream>
using namespace std;

void displaymsg()
{
    cout << " hello from the other side!  " << endl;
}

int main()
{
    cout << " hello from main. \n";
    for (int count=0; count<5; count++)
    {
        displaymsg(); // call displaymsg() function
    }
    return 0;

}

/*

 hello from main. 
 hello from the other side!  
 hello from the other side!  
 hello from the other side!  
 hello from the other side!  
 hello from the other side!  

*/