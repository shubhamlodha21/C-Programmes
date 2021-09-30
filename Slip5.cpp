// Description:Addition of numbers by using function overloading
// Date: 30/09/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;

class Calculations
{
    public:
    float sum=0;

    int Addition(int a,int b)
    {
        sum=a+b;
        return sum;
    }

    float Addition(float a, float b)
    {
        sum=a+b;
        return sum;
    }

    float  Addition(int a,int arr[])
    {
        sum=0.0;
        for(int i=0;i<a;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
};

int main()
{
    int iNo1,iNo2,iNo;
    float fNo1,fNo2,ans;

    cout<<"Enter two Interger Numbers";
    cin>>iNo1>>iNo2;

    cout<<"Enter two Float Numbers";
    cin>>fNo1>>fNo2;

    cout<<"Enter the Number of Element you want in array:";
    cin>>iNo;

    int Arr[iNo];

    cout<<"Enter elements:";
    for(int i=0;i<iNo;i++)
    {
       cin>>Arr[i];
    }

    Calculations obj;

    ans=obj.Addition(iNo1,iNo2);
    cout<<"Addition is:"<<ans<<endl;

    ans=obj.Addition(fNo1,fNo2);
    cout<<"Addition is:"<<ans<<endl;

    ans=obj.Addition(iNo,Arr);
    cout<<"Addition is:"<<ans<<endl;

}