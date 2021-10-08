//Description: Accept Array From User and Check perticular element is or not
// Author : Shubham Lodha
// Date : 08/10/2021


#include<bits/stdc++.h>
using namespace std;

bool Chk(int iNo,int *arr,int f)
{
    for(int i=0;i<iNo;i++)
    {
        if(arr[i]==f)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n=0,s=0;
    int *arr= new int;
    bool bRet=false;

    cout<<"Enter Number of Elements you want:"<<"\n";
    cin>>n;
    
    cout<<"Enter Elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter Element you want search"<<endl;
    cin>>s;

    bRet=Chk(n,arr,s);
    if(bRet==true)
    {
        cout<<"Given Number is present";
    }
    else
    {
        cout<<"Given Number is not present";
    }
}