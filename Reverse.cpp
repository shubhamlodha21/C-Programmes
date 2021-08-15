////////////////////////////////////////////////////////
//Function Name:Reverse
//Input:shubhAM
//Output:MAhbuhs
//Description:Reverse the String
//Date: 16/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Count
{
    public:
    void Reverse(char *str)
    {
    string s;
    while(*str!='\0')
    {
         s=s+*str;
        str++;
    }
    for (int i=s.length()-1; i>=0; i--)
     cout << s[i];
    }
};

int main()
{
    char str[50];

    cout<<"Enter a String:";
    scanf("%[^'\n']s",&str);

    Count obj;
    cout<<"Reverse String is:";
    obj.Reverse(str);

    return 0;
}