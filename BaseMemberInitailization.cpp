// Description: Base member Initailzation (Change Values of Constants)
// Date : 02/10/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;

class Demo
{
    public:
    int i;
    int j;
    const int k;

    Demo(int iNo):i(++iNo),k(++iNo),j(++iNo)//Values are incremened according to initailzations
    {
        cout<<"Value of j is:"<<i<<endl;
        cout<<"Value of k is:"<<k<<endl;
        cout<<"value of i is:"<<j<<endl;

    }
};

int main()
{
    Demo obj(10);
    return 0;
}