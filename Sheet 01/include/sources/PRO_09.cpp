//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_09.h"

/*
    9. C++ Program to Check Whether a Number is Prime or Not.
        a. A positive integer which is only divisible by 1 and itself is known as prime number.
        b. For example: 13 is a prime number because it is only divisible by 1 and 13 but, 15 is not prime number because it is divisible by 1, 3, 5 and 15.
        Note: 0 and 1 are not prime numbers.
        Example:
            Enter a positive integer: 29
            29 is a prime number.
*/

void PRO_09(){
    // input
    int x=0; bool isPrimeNumber = true; cin >> x;

    // process
    // not prime
    for(int a = 2; a <= x / 2; a++){
        if(x % a == 0){
            isPrimeNumber = false;
            break; // i got it, has more than one divisor
        }
    }
    if(x == 0 || x == 1){
        isPrimeNumber = false;
    }

    // output
    if(isPrimeNumber == true){
        cout << x << " is prime number";
    } else{
        cout << x << " is not prime number";
    }

}