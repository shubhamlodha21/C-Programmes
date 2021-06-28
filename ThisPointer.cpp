/////////////////////////////////////
//Input:--
//Output:greater value is 100
//Description:Use of this pointer
//Date:28/06/2021
//Author:Shubham Lodha 
////////////////////////////////////////

#include <iostream>
using namespace std;
class great
{
int no;
public:
great(int no=0)
{
(*this).no=no;
}
great& maxx(great&x)
{
if(x.no>no)
{
return x;
}
else
{
return *this;
}
}
void disp()
{
cout<<"greater value is "<<no;
}
};
int main()
{
great obj1(100),obj2(20),obj3;
obj3=obj1.maxx(obj2);
obj3.disp();
}