
////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:1234
//Output:
/*
4   3   2   1
4   3   2
4   3
4
 */
//Description:Prints the Pattern
//Date: 02/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;
// Input : 1234

class NumberX
{
public:
    int iNo;
    void Accept()
    {
        cout<<"Enter Number\n";
        cin>>iNo;
    }
    void Pattern()
    {
        int iValue = iNo,iCnt = 0, i = 0, j = 0;
        while(iValue > 0)
        {
            iCnt++;
            iValue = iValue / 10;
        }
        iValue = iNo;
        for(i = iCnt ; i > 0; i--)
        {
            for(j = 0; j< i; j++)
            {
                cout<<iValue % 10<<"\t";
                iValue = iValue / 10;
            }
            cout<<"\n";
            iValue = iNo;
        }
        
    }
};
int main()
{
    NumberX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}
