////////////////////////////////////////////////////////
//Function Name:Swapping
//Input : 10   20 
//Output : 20   10
//Description:Swapping of two numbers 
//Date: 15/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace  std;

void Swapping(int ino1,int ino2)
{
    ino1=ino1+ino2;
    ino2=ino1-ino2;
    ino1=ino1-ino2;

    cout<<ino1<<"\n"<<ino2<<"\n";
}

int main()
{
    int ino1=0,ino2=0;

    cout<<"Enter First Number:";
    cin>>ino1;

    cout<<"Enter Second Number";
    cin>>ino2;

    cout<<"Numbers after Swapping";
    Swapping(ino1,ino2);
    return 0;
}