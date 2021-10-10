//Selection-Sort

#include<bits/stdc++.h>
using namespace std;

void Sort(int iNo,int *Arr)
{
    for(int i=0;i<iNo;i++)
    {
        for(int j=i+1;j<iNo;j++)
        {
            if(Arr[i]>Arr[j])
            {
                int temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }
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