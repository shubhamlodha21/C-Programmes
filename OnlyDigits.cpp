////////////////////////////////////////////////////////
//Function Name:DisplayDigits
//Input:ShubhAM loDha1230 8
//Output:12308
//Description:Accept String from user and return all digits
//Date: 18/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Digits
{
    public:
    int i=0;
    void DisplayDigit(char *str)
    {
        while(str[i]!='\0')
        {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            cout<<str[i];
        }
        else 
        {

        }
        i++;
        }
    }
    
};

int main()
{
    char arr[50];
    Digits obj;

    cout<<"Enter a String";
    scanf( "%[^'\n']s",&arr);

    obj.DisplayDigit(arr);
    return 0;
}