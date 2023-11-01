//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_04.h"

/*
      4. C++ Program to Check Whether Number is Even or Odd.
        a. Integers that are perfectly divisible by 2 are called even numbers.
        b. And those integers that are not perfectly divisible by 2 are not known as odd numbers.
        c. To check whether an integer is even or odd, the remainder is calculated when it is divided by 2 using modulus operator %. If the remainder is zero, that integer is even if not that integer is odd.
        Example
            Enter an integer: 23
            23 is odd.
*/

void PRO_04(){
    // input
    int a; string result; cin >> a;

    // process
    result = to_string(a) + " is odd";
    if(a % 2 == 0){
        result = to_string(a) + " is even";
    }

    // result
    cout << result << endl;
}