//Description: Calculate Arithmetic and Harmonic Mean of numbers
//Date: 23/09/2021
//Author : Shubham Lodha

#include<iostream>
using namespace std;

void Mean(int a,int b)
{
    int ans=0;

    ans=(a+b)/2;
    cout<<"Arithmetic mean is:"<<ans<<"\n";

    ans=(2*a*b)/a+b;
    cout<<"Harmonic Mean is:"<<ans<<"\n";
}

int main()
{
    int a=0,b=0;

    cout<<"Enter First Number:";
    cin>>a;

    cout<<"Enter Second Number:";
    cin>>b;

    Mean(a,b);

    return 0;
}