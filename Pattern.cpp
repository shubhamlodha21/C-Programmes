////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:Hello
//Output:
/*
H
H  e
H  e   l
H   e   l   l
H   e   l   l   o
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
        int iCnt1 = 0, iCnt2 = 0;
        while(*ptr != '\0')
        {
            while(iCnt2 <= iCnt1)
            {
                cout<<*s<<"\t";
                s++;
                iCnt2++;
            }
            iCnt2 = 0;
            s = str;
            ptr++;
            iCnt1++;
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
