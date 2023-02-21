#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void showIntro();
int getCups();
double cupsToOunces(int);


int main(){

    // Variables for the cups and ounces.
    double cups, ounces;

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // display an intro screen.
    showIntro();

    // Get the number of cups.
    cups = getCups();

    // Convert cups to fluid ounces.
    ounces = cupsToOunces(cups);

    // Display the number of ounces.
    cout << cups << " cups equals " <<  ounces << " ounces.\n";

    return 0;
}


void showIntro(){
    cout << "\nThis program converts measurements\n" << "in cups to fluid ounces. For your\n" << "reference the formula is:\n" << " 1 cup = 8 fluid ounces\n\n";
}

int getCups() {
   int numCups;
    cout << "Enter the number of cups: "; 
    cin >> numCups;
    
    return numCups;

}

double cupsToOunces(int numCups) 
{
    return numCups * 8.0; 
}