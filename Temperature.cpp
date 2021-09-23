//Description: Find Temperature in Celcius and Kelvin
//Date: 23/09/2021
//Author : Shubham Lodha

#include<iostream>
using namespace std;

void Converts(int f)
{
    float c,k;

    c=(f-32*1.8);
    cout<<"Temperature in Celcius is:"<<c<<"\n";

    k=c+273.15;
    cout<<"Temperature is Kelvin is:"<<k<<"\n";

}

int main()
{
    int f=0;

    cout<<"Enter temperature in Feherinate:";
    cin>>f;

    Converts(f);

    return 0;
}