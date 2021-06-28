  
//////////////////////////////////////
//Input: enter a radius 10
//Output: volume of sphere is 4082
//Description:Find the Volume of Sphere
//Date: 28/06/2021
//Author:Shubham Lodha 
/////////////////////////////////////////


#include <iostream>
using namespace std;
int main()
{
int r;
float v;
cout<<"enter a radius ";
cin>>r;
v=1.3*3.14*(r*r*r);
cout<<"volume of sphere is "<<v;
}