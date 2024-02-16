#include <iostream>
using namespace std;
//main function
int main()
{    //variables
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    //output
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
