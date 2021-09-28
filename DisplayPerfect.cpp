//Description:  Enter a number from user and Display Perfect number till that number
//Date : 28/09/2021
//Author : Shubham Lodha

#include<iostream>
using namespace std;

void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        int iSum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                iSum=iSum+j;
            }
        }
        if(iSum==i)
        {
            cout<<"value is"<<i<<"\n";
        }
    }
}
int main()
{
    int iNo=0;
    
    cout<<"Enter a Numbers  upto you want perfect numbers:";
    cin>>iNo;

    Display(iNo);

    return 0;
}