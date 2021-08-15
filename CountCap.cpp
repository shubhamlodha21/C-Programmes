//Function Name:CountCap
//Input:shubhAM
//Output:2
//Description:Accept String from user and Count Capital Character
//Date: 16/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Count
{
    public:
    int CountCap(char *str)
    {
        int iCnt=0;
        while(*str!='\0')
        {
            if((*str>='A')&&(*str<='Z'))
            {
                iCnt++;
            }
            str++;
        }
        return iCnt;
    }
};

int main()
{
    char str[50];

    cout<<"Enter a String:";
    scanf("%[^'\n']s",&str);

    Count obj;
    int iRet=obj.CountCap(str);

    cout<<"Count of Capital Character is"<<iRet;
    return 0;
    }