//Whole class can be friend of our class

#include<iostream>
using namespace std;
class Hello
{
    public:
    void fun();
    void gun();
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
    friend class Hello;
};

void Hello::fun()
{
    Demo obj;
    cout<<"value of i is"<<obj.i<<endl;
    cout<<"value of j is"<<obj.j<<endl;
    cout<<"value of k is"<<obj.k<<endl;
}

void Hello::gun()
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
    hobj.gun();
    return 0;
}
