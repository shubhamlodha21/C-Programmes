////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:Hello
//Output:
/*
 H  e   l   l   o
 H  e   l   l
 H  e   l
 H  e
 H
 */

//Description:Print the Pattern
//Date: 01/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    void Pattern()
    {
        char *ptr=str;
        char *s = str;
        int iCnt = 0;
        while(*ptr != '\0')
        {
            while(*(s+iCnt)!= '\0')
            {
                cout<<*s<<"\t";
                s++;
            }
            s = str;
            ptr++;
            iCnt++;
            cout<<"\n";
        }
    }
};
int main()
{
    StringX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}
