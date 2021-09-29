//Description : Check Whether given number is Armstrong or not
// Date : 29/09/2021
// Author : Shubham Lodha

#include<iostream>
using namespace std;

bool Check(int iNo)
{
    int iDigit=0,iPow=0,iSum=0,iResult=1;

    int n=iNo;

    while(n!=0)
    {
        iPow++;
        n=n/10;
    }

    n=iNo;
    while(n!=0)
    {

    iDigit=n%10;
    iResult=1;

    for(int i=0;i<iPow;i++)
    {
        iResult=iResult*iDigit;
    }

    iSum=iSum+iResult;
    //cout<<iSum<<"\n";

    n=n/10;
    }

    if(iSum==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iNo=0;
    bool bRet;

    cout<<"Enter a Number:";
    cin>>iNo;

    bRet=Check(iNo);
    if(bRet==true)
    {
        cout<<"Given Number is an Armstrong Number";
    }
    else
    {
        cout<<"Given Number is not an ArmStrong Number";
    }

    return 0;
}