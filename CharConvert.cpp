////////////////////////////////////////////////////////
//Function Name:Special
//Input :a
//Output :A
//Description:Accept Character from user and Converted Small into Captial and Viceviersa
//Date: 15/08/2021
//Author: Shubham Lodha
////////////////////////////////////////////////////

#include<iostream>
#include<stdio.h>
using namespace std;

class Convert
{
    public:
    char CharConvert(char ch)
    {
        if((ch>'A')&&(ch<'Z'))
        {
            ch=ch+32;
            return ch;
        }
        else if((ch>'a')&&(ch<'z'))
        {
            ch=ch-32;
            return ch;
        }
        else
        {
            return ch;
        }
    }
};

int main()
{
    char ch='/0';

    cout<<"Enter a Character:";
    cin>>ch;

    Convert obj;
    char ch1=obj.CharConvert(ch);
    cout<<"Answer Character is:"<<ch1;
    return 0;
}