////////////////////////////////////////////////////////
//Function Name:Converted
//Input :22
//Output : Hexadecimal is 16
//         Octal is 26
//Description:Accept Number from user and converted it into Hexadeciaml and Octal
//Date: 15/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
#include<stdio.h>
using namespace std;

class Converted
{
    public:
    void Convert(int i)
    {
        printf("Hexadecimal is %x\n",i);
        printf("Octal is %o",i);
    }
};

int main()
{
    int i;

    cout<<"Enter a Number:";
    cin>>i;

    Converted obj;
    obj.Convert(i);
    return 0;
}