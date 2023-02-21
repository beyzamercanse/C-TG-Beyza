// calculate grosspay

#include  <iostream>
#include <iomanip>
using namespace std;

// global cnstants
// Because these constants are global and are defined 
// before all of the functions in the program, all the functions may access them.

const double pay_rate = 22.55; // hourly pay rate
const double base_hours = 40.0; // max non-overtime hours
const double ot_multipler = 1.5;  //  overtime multiplier

// Function prototypes
double getBasePay(double);
double getOvertimePay(double);

int main(){

    double hours, basePay,overtime  = 0.0, totalPay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin>>hours;

    // Get the amount of base pay.
    basePay = getBasePay(hours);

    // Get overtime pay, if any.
    if (hours > base_hours)
        overtime = getOvertimePay(hours);
    
    // Calculate the total pay.
    totalPay = basePay + overtime;

    // Set up numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;

    // Display the pay.
    cout << "Base pay: $" << basePay << endl << "Overtime pay $" << overtime << endl << "Total pay $" << totalPay << endl;
    
    return 0;
    

}

double getBasePay(double hoursWorked){
    double basePay; // To hold base pay
    // Determine base pay.
    if (hoursWorked > base_hours)
        basePay = base_hours * pay_rate;
    else
        basePay  = hoursWorked  * pay_rate;

    return basePay;

}

double getOvertimePay(double hoursWorked){

    double overtimePay;

    // Determine overtime pay.
    if(hoursWorked >base_hours)
    {
        overtimePay  = (hoursWorked - base_hours) * pay_rate  *ot_multipler;
    }
    else
        overtimePay  =  0.0;
    
    return  overtimePay;

}
