/* 
 * File:   main.cpp
 * Author: Tai Lee
 * Created on June 21, 2016, 6:37 PM
 * Purpose: finding the pressure in an area
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//iostream uses the standard namespace



/* computers r fun
 */
int main(int argc, char** argv) {
    float force = 172.5,
     area = 27.5,
     presr = area/force;
    
    cout<<"Pressure = "<<presr<<"P"<<endl;
    

    return 0;
}

