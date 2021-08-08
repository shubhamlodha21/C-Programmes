////////////////////////////////////////////////////////
//Function Name:NameSpace
//Description:Implementations of NameSpace Concept
//Date: 08/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        // cout<<"Inside Class Demo...!";
    };
}

namespace Infosystem
{
    class Demo
    {
        //cout<<"Inside Class Demo in Infosystem";
    };
}

int main()
{
    using namespace Marvellous;
    Demo obj1;

    Infosystem::Demo obj2;
    return 0;
}