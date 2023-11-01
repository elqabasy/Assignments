//
// Created by Mahros on 10/31/2023.
//
#include <iostream>
using namespace std;
#include "../headers/PRO_10.h"

/*
    10. C++ Programs To Create Pyramid and Pattern
        a. Programs to Print Triangle Using *
            Example: Program to Print a Full Pyramid Using *
                        *
                      * * *
                    * * * * *
                  * * * * * * *
                * * * * * * * * *
*/

void PRO_10(){
    // input

    // output
    int n = 9;
    // 90 in bottom right
    for(int row = 1; row <= n; row++){
        // spaces
        for(int col = n; col >= row; col--){
            cout << " ";
        }

        // stars
        for(int col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;

    }
}