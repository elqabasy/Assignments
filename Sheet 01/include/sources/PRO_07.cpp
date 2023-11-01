//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_07.h"

/*
    7. C++ Program to Generate Multiplication Table.
        a. Display Multiplication Table up to 10
        Example:
            Enter a positive integer: 5
            5 * 1 = 5
            5 * 2 = 10
            5 * 3 = 15
            5 * 4 = 20
            5 * 5 = 25
            5 * 6 = 30
            5 * 7 = 35
            5 * 8 = 40
            5 * 9 = 45
            5 * 10 = 50
*/

void PRO_07(){
    // input
    int n = 0; cout << "Enter a positive integer: "; cin >> n;

    // process
    for(int x = 1; x <= 10; x++){
        cout << n << " * " << x << " = " << n * x << endl;
    }
}