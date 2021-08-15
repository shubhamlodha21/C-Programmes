////////////////////////////////////////////////////////
//Function Name:Special
//Input :!
//Output : It is a Special Symbol
//Description:Accept Character from user and check whether it is special symbol or not
//Date: 15/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
#include<stdbool.h>
using namespace std;

class Special
{
    public:
    bool ChkSpecial(char ch)
    {
       if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z'))|((ch>='0')&&(ch<='9')))
       {
           return 1;
       }
        else
        {
            return 0;
        }
    }
};

int main()
{
    char ch;

    cout<<"Enter a Character";
    cin>>ch;

    Order obj;
    int iRet=obj.ChkSpecial(ch);
    if(iRet==1)
    {
        cout<<"It is not a Special Symbol";
    }
    else
    {
        cout<<"It is Special Symbol";
    }
    return 0;
}

