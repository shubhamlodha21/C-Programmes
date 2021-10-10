//Bubble Sort

#include<bits/stdc++.h>
using namespace std;

void Sort(int iNo,int *Arr)
{
    int iCnt=0;

    //while(iCnt<iNo)
    for(int k=1;k<=iNo;k++)//Last Number is Sorted
    {
        for(int i=0;i<iNo-k;i++)
        {
            if(Arr[i] > Arr[i+1])
            {
                int temp=Arr[i];
                Arr[i]=Arr[i+1];
                Arr[i+1]=temp;
            }
        }
        iCnt++;
    }
    
    cout<<"Sorted List is:";
    for(int j=0;j<iNo;j++)
    {
        cout<<Arr[j]<<endl;
    }
}

int main()
{
    int iNo=0;
    int *Arr=new int;

    cout<<"Enter number of Elements:";
    cin>>iNo;

    cout<<"Enter Elements:"<<endl;
    for(int i=0;i<iNo;i++)
    {
        cin>>Arr[i];
    }

    Sort(iNo,Arr);

    return 0;
}
