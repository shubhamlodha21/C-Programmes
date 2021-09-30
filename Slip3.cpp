//Description : accept length and width of a rectangle Calculate and display perimeter as well as area of a rectangle 
// Date: 30/09/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;

inline void Rectangle(float a, float b)
{
    cout<<"Perimeter  is:"<<fixed<<setprecision(2)<<(a*b)<<endl;
    cout<<"Area is:"<<fixed<<setprecision(2)<<(2*(a+b))<<endl;
}

int main()
{
    float a,b;

    cout<<"Enter length and Width of Rectangle:";
    cin>>a>>b;

    Rectangle(a,b);

    return 0;
}