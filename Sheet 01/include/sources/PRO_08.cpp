//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_08.h"

/*
    8. C++ Program to Find GCD.
        a. The largest integer which can perfectly divide two integers is known as GCD or HCF of those two numbers.
        b. For example, the GCD of 4 and 10 is 2 since it is the largest integer that can divide both 4 and 10.
        Example:
            Enter two numbers: 16
            76
            HCF = 4
*/

int HFC(int a, int b){
    if(a % b == 0){
        return b;
    } else{
        return  HFC(b, a % b);
    }

}

void PRO_08(){
    // input
    int a=0, b=0, result=0; cout << "Enter two numbers: "; cin >> a >> b;

    // process
    result = HFC(a, b);

    // output
    cout << "HFC = "<< result << endl;

}