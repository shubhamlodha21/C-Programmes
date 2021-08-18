////////////////////////////////////////////////////////
//Function Name:UpperConvert
//Input:ShubhAM loDha
//Output:SHUBHAM LODHA
//Description:Accept String from user and Converted it into UpperCase.
//Date: 18/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Capital
{
    public:
    int i=0;
    void UpperConvert(char *str)
    {
        while(str[i]!='\0')
        {
        if((str[i]>='a')&&(str[i]<='z'))
        {
            str[i]=str[i]-32;
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
    Capital obj;

    cout<<"Enter a String";
    scanf( "%[^'\n']s",&arr);

    obj.UpperConvert(arr);
    return 0;
}