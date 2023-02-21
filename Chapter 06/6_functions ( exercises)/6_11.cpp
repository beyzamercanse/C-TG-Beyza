#include <iostream>
#include <iomanip>
using namespace std;


// Function prototypes
void showMenu();
void showFees(double, int);

int main(){

    int choice; // To hold a menu choice
    int months; // To hold a number of months

    //  constants for menu choices
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE =2,
              SENIOR_CHOICE =3,
              QUIT_CHOICE = 4;
    
    // constants for membership rates
    const double  ADULT  = 40.0,
                  CHILD  =20.0,
                  SENIOR  = 30.0;
    
    // SET UP  numeric output formating
    cout << fixed <<  showpoint << setprecision(2);

    do
    {
        // display the menu and get the user's choice
        showMenu();
        cin>>choice;

        // validate the menu selection.
        while (choice < ADULT_CHOICE || choice >  QUIT_CHOICE )
        {
            cout << "please  enter a valid  menu choice: ";
            cin >> choice;
        }

        // if the user doesnot want to quit, proceed.
        if  (choice != QUIT_CHOICE)
        {
            // get the number of months
            cout  << "for how many months?";
            cin>>months;

            // diisplay the membership fees.
            switch (choice)
            {
                case ADULT_CHOICE:
                    showFees(ADULT, months);
                    break;
                case  CHILD_CHOICE:
                    showFees(CHILD, months);
                    break;
                case SENIOR_CHOICE:
                    showFees(SENIOR, months);
            }
        }
    } while (choice !=  QUIT_CHOICE);
    return 0;
}

//  ***************************************************************
//  ******************************************
//  ******************************************
//  *********************
//  ***************************************************************
//  ******************************************
//  *********************
//  ***************************************************************
//  ******************************************
//  *********************
//  ***************************************************************
//  ******************************************

void showMenu() {

    cout << "\n\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n\n"
         << " enter your choice: ";
}


void showFees(double memberRate, int months)
{
    cout << "the total charges are $"
         <<  (memberRate * months) << endl;
}
