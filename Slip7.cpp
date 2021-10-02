// Description: create a class Worker with data members as Worker_Name, No_of_Hours_worked,Pay_Rate. Write necessary member functions to calculate and display the salary of worker
// Date : 02/10/2021
// Author : Shubham Lodha


#include<bits/stdc++.h>
using namespace  std;

class Worker
{
    private:
    char w_name[50];
    float hrs;
    float pay_rate=100;

    public:
    void Accept()
    {
        cout<<"Enter Worker Name:"<<endl;
        cin>>w_name;

        cout<<"How many Hours he Works:"<<endl;
        cin>>hrs;

    }

    void Display()
    {
        cout<<"Worker name is:"<<w_name<<endl;
        cout<<"He Works:"<<hrs<< "hours"<<endl;
        cout<<"Salary is:"<<(pay_rate*hrs)<<endl;
    }
};


int main()
{
    int iNo=1;

    Worker obj;

    while(iNo!=0)
    {
    cout<<"Enter Choice:"<<endl;
    cout<<"1.Accept"<<endl;
    cout<<"2.Display"<<endl;
    cout<<"0.Exit"<<endl;
    cin>>iNo;
    cout<<"\n__________________\n";

    if(iNo==1)
    {
        obj.Accept();
    }

    else if(iNo==2)
    {
        obj.Display();
    }

    else if(iNo==0)
    {
        cout<<"Thanks for using";
        exit(0);
    }

    else if(iNo>2)
    {
        cout<<"Wrong Option"<<endl;
    }
    }
}