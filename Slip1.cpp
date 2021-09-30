// Description : Perform arithmetic binary operations like +, - , *, / on these numbers using  Inline Function
// Date: 30/09/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;

inline void InlineArithmetic(float a, float b)
{
    cout<<"Addition is"<<fixed<<setprecision(2)<<a+b<<endl;
    cout<<"Substraction is"<<fixed<<setprecision(2)<<a-b<<endl;
    cout<<"Multiplication  is"<<fixed<<setprecision(2)<<a*b<<endl;
    cout<<"Division is"<<fixed<<setprecision(2)<<a/b<<endl;

}

int main()
{
    float a,b;

    cout<<"Enter First and Second Number:";
    cin>>a>>b;

    InlineArithmetic(a,b);

    return 0;
}