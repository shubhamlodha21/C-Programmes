////////////////////////////////////////////////////////
//Function Name:ChkAlpha
//Input:t
//Output:It is Small Character
//Description:Accept Character from user and check whether it is Small alphabet or not
//Date: 13/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std;
#define true 1
#define false 0

bool ChkSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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

    bool bRet=ChkSmall(ch);
    if(bRet==true)
    {
        cout<<"It is a Small Charcter";
    }
    else
    {
        cout<<"It is not a Small Character";
    }
    return 0;
}