/* 
 * File:   main.cpp
 * Author: Tai Lee
 *Purpose: Average of Sum
 * Created on June 23, 2016, 9:19 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*Went ahead and added sum to display
 * Hope you don't mind too much
 */
int main(int argc, char** argv) {

    float num1=24,num2=28,num3=32,num4=33,num5=37,sum,avg;
    
    sum=num1+num2+num3+num4+num5;
    avg=sum/5.0;
    
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
    return 0;
}

