////////////////////////////////////////////////////////
//Function Name:CountSpace
//Input:ShubhAM loDha1230 8
//Output:3
//Description:Accept String from user Count Number of White-Spaces
//Date: 18/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Count
{
    public:
    int i=0,iCnt=0;
    int CountSpace(char *str)
    {
        while(str[i]!='\0')
        {
        if((str[i]==' '))
        {
            iCnt++;
        }
        i++;
        }
         return iCnt; 
    }  
};

int main()
{
    char arr[50];
    Count obj;

    cout<<"Enter a String";
    scanf( "%[^'\n']s",&arr);

    int iRet=obj.CountSpace(arr);
    cout<<"Number of White Spaces are: "<<iRet;
    return 0;
}