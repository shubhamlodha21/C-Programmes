//Description: Accept Array From User and Check perticular element is or not(Bidirectional)
// Author : Shubham Lodha
// Date : 08/10/2021


#include<bits/stdc++.h>
using namespace std;

bool Search(int iNo,int *arr,int f)
{
    int start=0;
    int end=iNo;

    while(start<=end)
    {
        if((arr[start]==f) || (arr[end]==f))
        {
            return true;
        }
        start++;
        end--;
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

    bRet=Search(n,arr,s);
    if(bRet==true)
    {
        cout<<"Given Number is present";
    }
    else
    {
        cout<<"Given Number is not present";
    }
}