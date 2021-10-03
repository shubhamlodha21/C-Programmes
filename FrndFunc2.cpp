//Description : Member function of class can be friend of our class
// Date : 03/10/2021
// Author : Shubham Lodha

#include<iostream>
using namespace std;
class Hello
{
    public:
    void fun();
};


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
    friend void Hello::fun();
};

void Hello::fun()
{
    Demo obj;
    cout<<"value of i is"<<obj.i<<endl;
    cout<<"value of j is"<<obj.j<<endl;
    cout<<"value of k is"<<obj.k<<endl;
}

int main()
{
    Hello hobj;
    hobj.fun();
    return 0;
}
