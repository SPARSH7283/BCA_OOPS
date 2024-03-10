#include "find_calculation.h "
#include<iostream>
using namespace std;
using namespace mathFunctions;

int main(){
    double x;
    cout<<"Enter the value for x: ";
    cin>>x;
    // calculate square root
    cout<<calculateSquareRoot(x);
    cout<<endl;
    // calculate cube root
    cout<<calculateCube(x);
    cout<<endl;
    // display n1 raised to power n2
    double n1;
    cout<<"Enter the number: ";
    cin>>n1;
    double n2;
    cout<<"Enter the power: ";
    cin>>n2;
    cout<<findPow(n1,n2);
}