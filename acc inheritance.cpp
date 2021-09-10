/////////////////////////////////////
/*Input:--
*Output:
Acc no: 101
Accname: shruti
Acc bal: 1000
company name: abcd
 withdrawl amount in current Account 100
 Deposite amount in current Account 200
Acc n1o: 101
Accname: shruti
Acc bal: 2000
Interest: 6
  withdrawl amount in saving Account 100
  Deposite amount in saving Account 2078
*Description:Real time banking application using inheritance
*Date:10-09-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<iostream>
#include<string.h>
using namespace std;
class Account
{
protected:
    int accno;
    char accname[10];
    float accbal;
public:
   virtual void withdrawl(float)=0;
    virtual void deposite(float)=0;
    virtual void display()=0;
};
class current:public Account
{
char companyname[10];
public:
    current(int accno, char accname[], float accbal, char companyname[])
    {
        this->accno=accno;
        strcpy(this->accname,accname);
        this->accbal=accbal;
        strcpy(this->companyname,companyname);
    }
void withdrawl(float amt)
{
    cout<<"\n withdrawl amount in current Account "<<amt;

}
void deposite(float amt)
{
    cout<<"\n Deposite amount in current Account "<<amt;
}
void display()
{
    cout<<"\nAcc no: "<<accno;
    cout<<"\nAccname: "<<accname;
    cout<<"\nAcc bal: "<<accbal;
    cout<<"\ncompany name: "<<companyname;
}
};
class saving:public Account
{
float interest;
public:
    saving(int accno, char accname[], float accbal,float interest)
    {
        this->accno=accno;
        strcpy(this->accname,accname);
        this->accbal=accbal;
        this->interest=interest;
    }
void withdrawl(float amt)
{
    cout<<"\n withdrawl amount in saving Account "<<amt;

}
void deposite(float amt)
{
    cout<<"\n Deposite amount in saving Account "<<amt;
}
void display()
{
    cout<<"\nAcc n1o: "<<accno;
    cout<<"\nAccname: "<<accname;
    cout<<"\nAcc bal: "<<accbal;
    cout<<"\nInterest: "<<interest;
}
};
int main()
{
    Account *obj;
    obj=new current(101,"shruti",1000,"abcd");
    obj->display();
    obj->withdrawl(100);
    obj->deposite(200);
    obj=new saving(101,"shruti",2000,6);
    obj->display();
    obj->withdrawl(100);
    obj->deposite(2078);
}
