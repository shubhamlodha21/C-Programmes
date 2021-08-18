////////////////////////////////////////////////////////
//Function Name:SmallCase
//Input:ShubhAM loDha
//Output:shubham lodha
//Description:Accept String from user and Converted it into SmallCase.
//Date: 18/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Small
{
    public:
    int i=0;
    void SmallConvert(char *str)
    {
        while(str[i]!='\0')
        {
        if((str[i]>='A')&&(str[i]<='Z'))
        {
            str[i]=str[i]+32;
            cout<<str[i];
        }
        else
        {
            cout<<str[i];
        }
        i++;
        }
    }
    
};

int main()
{
    char arr[50];
    Small obj;

    cout<<"Enter a String";
    scanf( "%[^'\n']s",&arr);

    obj.SmallConvert(arr);
    return 0;
}