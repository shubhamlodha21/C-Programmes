////////////////////////////////////////////////////////
//Function Name:ChkAlpha
//Input:0
//Output:It is a Digit
//Description:Accept Character from user and check whether it is Digit or not
//Date: 13/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std;
#define true 1
#define false 0

bool ChkDigit(char ch)
{
    if((ch>='0')&&(ch<='9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char ch='\0';

    cout<<"Enter a Character";
    cin>>ch;

    bool bRet=ChkDigit(ch);
    if(bRet==true)
    {
        cout<<"It is a Digit";
    }
    else
    {
        cout<<"It is not a Digit";
    }
    return 0;
}