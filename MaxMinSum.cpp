//Description:Return the Maximum and Minimum sum of given array
// Date: 26/09/2021
// Author : Shubham Lodha

#include<iostream>
using namespace std;

void MaxMinSum(int arr[])
{
    int iSum1=0,iSum2=0;

    for(int i=0;i<4;i++)
    {
        iSum1=iSum1+arr[i];
    }
   
    for(int i=4;i>0;i--)
    {
        iSum2=iSum2+arr[i];
    }

    cout<<"Addition of Min four is"<<iSum1<<endl;

    cout<<"Addition of Max four is"<<iSum2<<endl;
}

int main()
{
    int arr[]={1,3,5,7,9};
    MaxMinSum(arr);
    return 0;
}