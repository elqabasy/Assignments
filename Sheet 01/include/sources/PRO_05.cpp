//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_05.h"

/*
    5. C++ Program to Find Quotient and Remainder.a. In this program, the user is asked to enter two integers (divisor and dividend) and the quotient, and the remainder of their division is computed.
        b. To compute quotient and remainder, both divisor and dividend should be integers.
        c. The division operator / computes the quotient (either between float or integer variables).
        d. The modulus operator % computes the remainder when one integer is divided by another (modulus operator cannot be used for floating-type variables).
        Example:
            Enter dividend: 13
            Enter divisor: 4
            Quotient = 3
            Remainder = 1
*/

void PRO_05(){
    // Enter dividend: 13
    // Enter divisor: 4
    // Quotient = 3
    // Remainder = 1

    // input
    int dividend=0, divisor=0, quotient=0, reminder=0;
    cout << "Enter Dividend: "; cin >> dividend;
    cout << "Enter Divisor: "; cin >> divisor;


    // process
    quotient = dividend / divisor;
    reminder = dividend % divisor;

    // result
    cout << "Quotient=" << quotient << endl;
    cout << "Reminder=" << reminder << endl;
}