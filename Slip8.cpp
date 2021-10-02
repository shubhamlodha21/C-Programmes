// Description: Calculate commision of Salesman according to thier target and sales_quantity
// Date : 02/10/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;

class Salesman
{
    private:
    char s_name[50];
    char p_name[50];
    int quantity;
    int target;
    float comm;

    public:

    void Accept()
    {
        cout<<"Enter Salesman Name:";
        cin>>s_name;

        cout<<"Enter Product Name:";
        cin>>p_name;

        cout<<"Enter Quantity:";
        cin>>quantity;

        cout<<"Enter Target:";
        cin>>target;
    }

    void Display()
    {
        cout<<"Salesman NAme is:"<<s_name<<endl;
        cout<<"Product name is:"<<p_name<<endl;
        cout<<"Quantity is:"<<quantity<<endl;
        cout<<"Target is:"<<target<<endl;

        if(quantity>target)
        {
            comm = ((quantity-target)*0.25+(target*0.10));
        }
        else if(quantity==target)
        {
            comm=target*0.10;
        }
        else
        {
            comm=0;
        }

        cout<<"Commssion Obtained is :"<<comm<<endl;
    }
};

int main()
{

    int iNo=0,iChoice=1;

    Salesman obj;

    while(iChoice!=0)
    {
        cout<<"Enter Choice:"<<endl;
        cout<<"1.Accept"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"0.Exit"<<endl;
        cin>>iChoice;
        cout<<"\n__________\n";

        if(iChoice==1)
        {
            obj.Accept();
        }

        else if(iChoice==2)
        {
            obj.Display();
        }

        else if(iChoice==0)
        {
            cout<<"Thanks for Using..!";
        }

        else
        {
            cout<<"Wrong Choice..!";
        }
    }
}
