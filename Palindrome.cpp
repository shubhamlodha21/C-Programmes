/// Description: Enter a number from user and check it is palindrome or not
// Date : 28/09/2021
// Author : Shubham Lodha

#include<iostream>
using namespace std;

bool ChkPalindrome(int iNo)
{
    int rev=0,temp=0,digit=0;

    temp=iNo;
    while(iNo!=0)   
    {
        digit=iNo%10;
        rev=(rev*10)+digit;
        iNo=iNo/10;
    }
    if(temp==rev)
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
    cout<<"Enter a Number:";
    cin>>iNo;
    bool bRet=ChkPalindrome(iNo);
    if(bRet==true)
    {
        cout<<"Given Number is a Palindrome Number";
    }
    else
    {
        cout<<"Given Number is not palindrome Number";
    }
}