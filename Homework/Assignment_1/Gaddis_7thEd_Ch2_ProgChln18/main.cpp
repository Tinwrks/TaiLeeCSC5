/* 
 * File:   main.cpp
 * Author: Tai Lee
 * Purpose: percentage of people purchasing energy drinks
 * Created on June 23, 2016, 12:51 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float Persn = 12467;
    float enrgydr = 14e-2;
    float citr = 64e-2;
    float enrgpep, citpep;
    
    enrgpep=Persn*enrgydr;
    citpep=enrgpep*citr;
    
    cout<<fixed<<setprecision(0);
    cout<<"people who purchase one or more energy drinks per week: "
    <<enrgpep<<endl;
    cout<<"People who prefer citrus flavor: "
    <<citpep<<endl;
    
    return 0;
}

