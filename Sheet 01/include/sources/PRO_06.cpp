//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_06.h"

/*
    6. C++ Program to Calculate Sum of Natural Numbers.
        a. Positive integers 1, 2, 3, 4... are known as natural numbers.
        b. This program takes a positive integer from user(suppose user entered n ) then, this program displays the value of 1+2+3+....+n.
        c. This program assumes that user always enters positive number.
        d. If user enters negative number, Sum = 0 is displayed and program is terminated.
        Example:
            Enter a positive integer: 50
            Sum = 1275
*/
int sum(int x){
    if(x == 0){
        return 0;
    }
    return x + sum(x - 1);
}

void PRO_06(){
    // We can use Recursion
    // input
    int x = 0, result = 0;
    cout << "Enter a positive integer: "; cin >> x;

    // process
    if(x > 0){
        result = sum(x);
    } else{
        result = 0;
    }

    // result
    cout << "Sum = " << sum(x) << endl;
}