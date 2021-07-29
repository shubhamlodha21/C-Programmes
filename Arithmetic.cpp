////////////////////////////////////////////////////////
//Function Name:Arithmetic
//Input:5 3
//Output:
/*Addition is:8
Substraction is 2
Multiplication is15
Division is 1*/
//Description:Accept Two Numbers from user and perform Arithmetic Operations
//Date: 29/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Arithmetic
{
    public:
    int iNo1=0,iNo2=0,result=0;


    void Accept()
    {
    cout<<"Enter First Number";
    cin>>iNo1;

    cout<<"Enter Second Number";
    cin>>iNo2;
    }

    int Additon()
    {
        result=iNo1+iNo2;
        cout<<"Addition is:"<<result<<"\n";
    }

    int Substraction()
    {
        result=iNo1-iNo2;
        cout<<"Substraction is "<<result<<"\n";
    }

    int Multiplication()
    {
        result=iNo1*iNo2;
        cout<<"Multiplication is"<<result<<"\n";
    }

    int Divison()
    {
        result=iNo1/iNo2;
        cout<<"Division is "<<result;
    }
};

int main()
{
    Arithmetic obj;
    obj.Accept();
    obj.Additon();
    obj.Substraction();
    obj.Multiplication();
    obj.Divison();
    return 0;
}