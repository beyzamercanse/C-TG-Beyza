// This program demonstrates how a local variable 
// can shadow the name of a global constant.

#include <iostream>
using namespace std;

// Global constant. 
const int BIRDS = 500;

// Function prototype 
void california();

int main(){

    cout << "In main there are " << BIRDS << " birds.\n";
    california();

    return 0;
}

void california()
{
    const int BIRDS=10000;
    cout << "in  california, there are "<< BIRDS << "birds.\n";
}

/*

n main there are 500 birds.
in  california, there are 10000birds.

*/

/*

When the program is executing in the california function,
 however, the local constant BIRDS shadows the global constant BIRDS. 


*/