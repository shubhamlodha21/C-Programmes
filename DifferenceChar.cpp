//Function Name:DifferenceChar
//Input:shubhAM
//Output:3
//Description:Accept String from user and Count Difference between Small Character and capital character
//Date: 16/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Count
{
    public:
    int CharDiff(char *str)
    {
        int iCnt=0,iCnt1=0;
        while(*str!='\0')
        {
            if((*str>='a')&&(*str<='z'))
            {
                iCnt++;
            }
            else if((*str>='A')&&(*str<='Z'))
            {
                iCnt1++;
            }
            str++;
        }
        return iCnt-iCnt1;
    }
};

int main()
{
    char str[50];

    cout<<"Enter a String:";
    scanf("%[^'\n']s",&str);

    Count obj;
    int iRet=obj.CharDiff(str);

    cout<<"Count of Difference  between Small and Captial Character is:"<<iRet;
    return 0;
    }