/* 
 * File:   main.cpp
 * Author: Tai Lee
 * Created on June 21, 2016, 2:27 PM
 * Purpose: sales tax on restaurant bill
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <iomanip>

using namespace std;//iostream uses the standard namespace



/* 
 */
int main(int argc, char** argv) {

    float sales = 44.50,
          slestax = sales*6.75e-2,
          grattax =(sales+slestax)*15e-2,
          ttlsles =sales+slestax+grattax;
    
    
    
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sale: $"<<sales<<"\n";
    cout<<"Sales Tax: $"<<slestax<<"\n";
    cout<<"Gratuity Tax: $"<<grattax<<"\n";
    cout<<"Total Sale: $"<<ttlsles<<endl;
    

    return 0;
}

