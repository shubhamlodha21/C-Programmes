//Description: Naked Function can be a friend of our class
// Date : 03/10/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;

class Demo
{
    private:
    int i;
    protected:
    int j;
    public:
    int k;

     Demo()
    {
        i=10;
        j=20;
        k=30;
    }
    friend void fun();
};

void fun()//Function defines outside the class
{
    Demo obj;
    cout<<"value of i is"<<obj.i<<endl;
    cout<<"value of j is"<<obj.j<<endl;
    cout<<"value of k is"<<obj.k<<endl;
}


int main()
{
    fun();
    return 0;
}