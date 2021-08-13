////////////////////////////////////////////////////////
//Function Name:ChkAlpha
//Input:T
//Output:It is Captial Character
//Description:Accept Character from user and check whether it is Captial alphabet or not
//Date: 13/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std;
#define true 1
#define false 0

bool ChkCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

    bool bRet=ChkCapital(ch);
    if(bRet==true)
    {
        cout<<"It is a Capital Charcter";
    }
    else
    {
        cout<<"It is not a Capital Character";
    }
    return 0;
}