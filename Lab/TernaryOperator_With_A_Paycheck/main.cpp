/* 
 * File:   main.cpp
 * Author: Tai Lee
 * Purpose: Paycheck calculations with ternary operation
 * Created on June 23, 2016, 1:37 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declared variables
    float hrsWrkd=50;//Hours Worked
    float payRate=10;//$s/hr
    char ovrTime=40;//Overtume starts at 40 hours
    float payChck;//Paycheck in $'s
    
    //input data
    
    //process the data
    payChck=hrsWrkd<ovrTime?//Test
        hrsWrkd*payRate://True
        ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*1.5;
    
    //output the processed data
    
    cout<<"Hours worked = "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<"(hrs)"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChck<<endl;
    
    //exit stage right!
    return 0;
}

