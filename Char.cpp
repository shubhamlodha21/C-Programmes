////////////////////////////////////////////////////////
//Function Name:ChkAlpha
//Input:t
//Output:It is Character
//Description:Accept Character from user and check whether it is alphabet or not
//Date: 13/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std;
#define true 1
#define false 0

bool ChkAlpha(char ch)
{
    if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
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

    bool bRet=ChkAlpha(ch);
    if(bRet==true)
    {
        cout<<"It is a Charcter";
    }
    else
    {
        cout<<"It is not a Character";
    }
    return 0;
}