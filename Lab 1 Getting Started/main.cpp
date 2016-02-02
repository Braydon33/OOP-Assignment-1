//
//  Lab 1 Getting Started
//
//  Created by Braydon Duprey on 2016-01-02.
//  Copyright © 2016 Braydon Duprey. All rights reserved.
//
//  This program will calculate the distance between two point that the user will assign

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
  
    //Variables ==============================
    double userX1;
    double userY1;
    double userX2;
    double userY2;
    double distance;
   
    //Input ======================================
    cout << "Please Enter X1 and Y1 values" << endl;
    cin >> userX1;
    cin >> userY1;
    cout << "Please enter X2 and Y2 values" << endl;
    cin >> userX2;
    cin >> userY2;
    
    //Calculation ====================================
    // Formula used d = sqrt((x2-x1)^2+(y2-y1)^2)
    distance = sqrt((userX2 - userX1) * (userX2 - userX1)) + ((userY2 - userY1) * (userX2 - userX1));
    //Output ================================
    cout << "\nThe distance between point 1 and 2 is " << distance << "\n";
    return 0;
    
    
    
    
}
