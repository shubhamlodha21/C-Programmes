///////////////////////////////////////////////////////
//Function Name:Swapping
//Input:5 15
//Output:15  5
//Description:Swapping of two numbers without using third operator
//Date: 14/09/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Swapping(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"After Swapping:"<<"\n";
    cout<<"value of First Number is:"<<x<<"\n";
    cout<<"value of Second Number is"<<y<<"\n";

}

int main()
{
    int x=0,y=0;
    cout<<"Enter First Number";
    cin>>x;

    cout<<"Enter Second Number";
    cin>>y;

    Swapping(x,y);
    return 0;
}