//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_03.h"

/*
     3.C++ Program to Swap Numbers (Using Temporary Variable).a. To perform swapping in the above example, three variables are used.
        b. The content of the first variable is copied into the temp variable. Then, the content of the second variable is copied to the first variable.
        c. Finally, the content of the temp variable is copied back to the second variable which completes the swapping process.
        Example:
            Before swapping.
            a = 5, b = 10
            After swapping.
            a = 10, b = 5
*/

void PRO_03(){
    // input
    int a, b, temp; cin >> a >> b;

    // Before
    cout << "Before Swapping" << endl;
    cout << "a=" << a << ", b=" << b << endl;


    // process
    // a b t
    // b t a
    temp = a; a = b; b = temp;

    // After
    cout << "\nAfter Swapping" << endl;
    cout << "a=" << a << ", b=" << b << endl;
}