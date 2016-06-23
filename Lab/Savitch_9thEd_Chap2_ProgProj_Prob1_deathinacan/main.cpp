/* 
 * File:   main.cpp
 * Author: Tai Lee
 * Purpose: Death in a can
 * Created on June 23, 2016, 1:22 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    float msMass=35;//35 grams is the mass of the mouse
    float msKill=5;//5 grams of sweetener kill the mouse
    float hmMass=45400;//grams or about 100 lb person
    float msSoda=350;//350 grams is the mass of soda can content
    float consin=1e-3;//1/10th of 1% concentration in soda of sweetener
    int nCans;//number of cans to kill dieter
    
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans).\n";
   
    return 0;
}

