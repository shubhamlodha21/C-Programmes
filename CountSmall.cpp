//Function Name:CountSmall
//Input:shubhAM
//Output:5
//Description:Accept String from user and Count Small Character
//Date: 16/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Count
{
    public:
    int CountSmall(char *str)
    {
        int iCnt=0;
        while(*str!='\0')
        {
            if((*str>='a')&&(*str<='z'))
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
    int iRet=obj.CountSmall(str);

    cout<<"Count of Small Character is"<<iRet;
    return 0;
    }