#include <iostream>
using namespace std ;
int main (){
    int Celsius,Fahrenheit;
    cout<<"Type your Celsius:";
    cin>>Celsius;
    Fahrenheit = (Celsius * 9/5) + 32;
    cout<<"Fahrenheit is :"<<Fahrenheit<<endl;
    return 0 ;
}