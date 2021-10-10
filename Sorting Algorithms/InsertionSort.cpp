//Insertion-Sort

#include<bits/stdc++.h>
using namespace std;

void Sort(int iNo,int *Arr)
{
    for(int i=1;i<iNo;i++)
    {
        int curr=Arr[i];
        int j=i-1;

        while((Arr[j] > curr)&&(j!=-1))  
        {
            Arr[j+1]=Arr[j];
            j--;
        }-
         Arr[j+1]=curr;
    }
    
    cout<<"Sorted List is:";
    for(int k=0;k<iNo;k++)
    {
        cout<<Arr[k]<<"\t";
    }
}

int main()
{
    int iNo=0;
    int *Arr=new int;

    cout<<"Enter numbner of Elements:";
    cin>>iNo;

    cout<<"Enter Elements:";
    for(int i=0;i<iNo;i++)
    {
        cin>>Arr[i];
    }

    Sort(iNo,Arr);

    return 0;
}