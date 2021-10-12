//Merge-Sort

#include<bits/stdc++.h>
using namespace std;

void Merge(int *Arr,int l,int mid,int u)
{
    int i=l,j=mid+1,k=l;
    int brr[20];

    while((i<=mid)&&(j<=u))
    {
        if(Arr[i]<=Arr[j])
        {
            brr[k]=Arr[i];
            i++;
        }
        else
        {
            brr[k]=Arr[j];
            j++;
        }
        k++;
    }

    if(i>mid)//Till end of first its but other has some element left
    {
        while(j<=u)
        {
            brr[k]=Arr[j];
            j++,k++;
        }
    }
    else//Till end of second its but other has some element left
    {
        while(i<=mid)
        {
            brr[k]=Arr[i];
            i++,k++;
        }
    }

    for(k=l;k<=u;k++)
    {
        Arr[k]=brr[k];
    }
}


void MergeSort(int *Arr,int l,int u)
{
    if(l<u)
    {
    int mid=(l+u)/2;
    MergeSort(Arr,l,mid);
    MergeSort(Arr,mid+1,u);
    Merge(Arr,l,mid,u);
    }
}

void Display(int *Arr,int u)
{
    for(int i=0;i<=u;i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

int main()
{
    int iNo=0;
    int *Arr=new int;

    cout<<"Enter number of Elements:";
    cin>>iNo;

    cout<<"Enter Elements:";
    for(int i=0;i<iNo;i++)
    {
        cin>>Arr[i];
    }

    MergeSort(Arr,0,iNo-1);

    cout<<"Sorted is:"<<endl;
    Display(Arr,iNo-1);

    return 0;
}