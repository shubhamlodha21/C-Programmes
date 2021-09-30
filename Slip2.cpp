// Description : find area and volume of cylinder using  Inline function with 2 prescision
// Date: 30/09/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;
#define pi 3.14

inline void Cylinder(float a, float b)
{
    cout<<"Area  is"<<fixed<<setprecision(2)<<((2*pi*a*b)+(2*pi*a*a))<<endl;
    cout<<"Volume is"<<fixed<<setprecision(2)<<(pi*a*a*b)<<endl;
}

int main()
{
    float a,b;

    cout<<"Enter radius and  Height of Cylinder:";
    cin>>a>>b;

    Cylinder(a,b);

    return 0;
}