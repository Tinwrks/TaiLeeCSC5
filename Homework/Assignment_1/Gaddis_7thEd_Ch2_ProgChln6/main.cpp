/* 
 * File:   main.cpp
 * Author: Tai Lee
 *Purpose: Annual Pay
 * Created on June 22, 2016, 3:18 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float payamnt=1700.0;
    int    payprd=26,
            anlpay;
    
    anlpay=payamnt*payprd;
            
    cout<<"Annual Pay: $"<<anlpay<<endl;
    
    return 0;
}

