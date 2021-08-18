////////////////////////////////////////////////////////
//Function Name:ToggelCase
//Input:ShubhAM loDha
//Output:sHUBHam LOdHA
//Description:Accept String from user and Togel it
//Date: 18/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Toggel
{
    public:
    int i=0;
    void ToggelCase(char *str)
    {
        while(str[i]!='\0')
        {
        if((str[i]>='a')&&(str[i]<='z'))
        {
            str[i]=str[i]-32;
            cout<<str[i];
        }
        else if((str[i]>='A')&&(str[i]<='Z'))
        {
            str[i]=str[i]+32;
            cout<<str[i];
        }
        i++;
        }
    }
    
};

int main()
{
    char arr[50];
    Toggel obj;

    cout<<"Enter a String";
    scanf( "%[^'\n']s",&arr);

    obj.ToggelCase(arr);
    return 0;
}