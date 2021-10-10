//Shell-Sort

#include<bits/stdc++.h>
using namespace std;

void Sort(int iNo,int *Arr)
{
    for(int gap=iNo/2;gap>0;gap/=2)
    {
        for(int i=gap;i<iNo;i++)
            {
                for(int j=i-gap;j>=0;j-gap)
                {
                    if(Arr[j+gap]>=Arr[j])
                    {
                        break;
                    }
                    else
                    {
                        swap(Arr[j+gap],Arr[j]);
                    }
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