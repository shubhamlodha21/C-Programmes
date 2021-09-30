//Description : To find Size of Empty of class
// Date: 30/09/2021
// Author : Shubham Lodha

#include<iostream>
using namespace std;

class Empty
{
    public:
    void fun()
    {
         cout<<"Inside Fun Function"<<endl;
    }
};

int main()
{
    Empty obj;
    cout<<"Size of Empty class is:"<<sizeof(obj);
}