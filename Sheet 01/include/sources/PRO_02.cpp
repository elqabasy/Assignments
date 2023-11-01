//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_02.h"

/*
     2. C++ Program to Print Number Entered by User.
        a. This program asks the user to enter a number.
        b. When the user enters an integer, it is stored in variable number.
        c. Then it is displayed on the screen.
        Example:
            Enter an integer: 28
            You entered 28
*/

void PRO_02(){
    // input
    unsigned int x; string result; cin >> x; // used [unsigned] because x >= 0;

    // process
    result = "You entered " + to_string(x);

    // output
    cout << result << endl;
}