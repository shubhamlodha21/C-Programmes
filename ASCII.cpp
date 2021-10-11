///////////////////////////////////////////////////////////////
//Function Name:ASCII
//Input : --
//Output : --
//Description:Display ASCII value from 1 to 127
//Date: 15/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<iostream>
using namespace std;

class ASCII
{
    public:
    int i=0;

    void DisplayASCII()
    {
        for(int i=0;i<=127;i++)
        {
            printf("%d\t%x\t%ot",i,i,i);
            printf("\n"); 
        }
    }
};

int main()
{
    ASCII obj;
    obj.DisplayASCII();
    return 0;
}
