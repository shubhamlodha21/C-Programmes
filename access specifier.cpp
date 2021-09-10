/////////////////////////////////////
/*Input:--
*Output: Base class
value of A in base clase 10
value of B in base class 20
*Description:Implementation of access specifier
*Date:10-09-2021
*Author: Shubham Lodha */
/////////////////////////////////////////
#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    int y;
    public:
    A()
    {
        cout<<"\nBase class";
        x=10;
        y=20;
    }
};
class B:private A
{
    public:
    B()
    {
        cout<<"\nvalue of A in base clase "<<x;
        cout<<"\nvalue of B in base class "<<y;
    }
};
class c:private B
{
    public:
    c()
    {
        //cout<<"value of A in base clase "<<x;
        //cout<<"value of B in base class "<<y;
    }
};
int main()
{
    c obj;
}
