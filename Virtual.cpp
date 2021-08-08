////////////////////////////////////////////////////////
//Function Name:Virtual
//Input: --

//Output:
/*Size of BAse Class is:12
Size of Derived Classs is :20
Inside Base Fun
Inside Derived Gun
Inside Base Mun
Inside Derived Gun
Inside Derived Sun
Inside Derived Gun*/

//Description:Implementations of Virtual Concept
//Date: 08/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    Base()
    {
        i=10;
        j=20;
    }

void fun()
{
    cout<<"Inside Base Fun\n";
}

virtual void gun()
{
    cout<<"Inside Base Gun\n";
}

virtual void run()
{
    cout<<"Inside Base Run\n";
}

virtual void mun()
{
    cout<<"Inside Base Mun\n";
}
};

class Derived : public Base
{
    public:
    int x,y;

    Derived()
    {
        x=100;
        y=200;
    }

void fun()
{
    cout<<"Inside Derived Fun\n";
}

void sun()
{
    cout<<"Inside Derived Sun\n";
}

void gun()
{
    cout<<"Inside Derived Gun\n";
}

virtual void run()
{
    cout<<"Inside Derived Run\n";
}

virtual void Bun()
{
    cout<<"Inside Derived Bun\n";
}
};

class Derived2:public Derived
{
    public:
    int a,b;

    Derived2()
    {
        a=998;
        b=999;
    }

    void run()
    {
        cout<<"Inside Derived2 Run\n";
    }

    void bun()
    {
        cout<<"Inside Derived2 Bun\n";
    }

    virtual void Nun()
    {
        cout<<"Inside Derived Nun\n";
    }
};

int main()
{
    cout<<"Size of BAse Class is:"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived Classs is :"<<sizeof(Derived)<<"\n";

    Base *bp=new Derived;
    Derived *dp=new Derived;

    bp->fun();
    bp->gun();
    bp->mun();
    //bp->sun();
    bp->gun();
    //bp->bun();
    dp->sun();
    dp->gun();
    //dp->bun();
    return 0;
}