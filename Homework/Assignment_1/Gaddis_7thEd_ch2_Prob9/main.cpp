/* /*
 * File:   main.cpp
 * Author: Tai Lee
 * Created on June 21, 2016, 12:12 PM
 * Purpose: Test score average
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//iostream uses the standard namespace



/* For the horde!
 */
int main(int argc, char** argv) {

    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    bool g;
    float h;
    double i;
    long double j;
    long k;
    unsigned long l;
    
    
    cout<<"character has "<<sizeof(a)<<" bytes.\n";
    cout<<"unsigned character has "<<sizeof(b)<<" bytes.\n";
    cout<<"short has "<<sizeof(c)<<" bytes.\n";
    cout<<"unsigned short has "<<sizeof(d)<<" bytes.\n";
    cout<<"int has "<<sizeof(e)<<" bytes.\n";
    cout<<"unsigned int has "<<sizeof(f)<<" bytes.\n";
    cout<<"bool has "<<sizeof(g)<<" bytes.\n";
    cout<<"float has "<<sizeof(h)<<" bytes.\n";
    cout<<"double has "<<sizeof(i)<<" bytes.\n";
    cout<<"long double has "<<sizeof(j)<<" bytes.\n";
    cout<<"long has "<<sizeof(k)<<" bytes.\n";
    cout<<"unsigned long has "<<sizeof(l)<<" bytes.\n";    
    return 0;
}

