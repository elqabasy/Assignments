//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_01.h"

/*
     1. C++ Program to Find Largest Number Among Three Numbers.
        a. In this program, the user is asked to enter three numbers.
        b. Then this program finds out the largest number among three numbers entered by user and displays it with a proper message.
        Example:
            Enter three numbers: 2
            8
            -4
            Largest number: 8
*/

void PRO_01(){
    // input
    int x, y, z, result=0; cin >> x >> y >> z;

    // process
    if(x > y && x > z){
         result = x;
    } else if(y > x && y > z){
         result = y;
    }else if(z > x && z > y){
         result = z;
    }

    // output
    cout << result << endl;
}