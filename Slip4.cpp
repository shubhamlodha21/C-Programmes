// Description:calculate area of cone, sphere and circle by using function overloading
// Date: 30/09/2021
// Author : Shubham Lodha

#include<bits/stdc++.h>
using namespace std;
#define pi 3.14

class Shapes
{
    public:
        float ans;
        void Area(float a,float b)
        {
            ans=pi*a*(a+b);
            cout<<"Area of Cone is:"<<ans<<endl;
        }

        void Area(float a)
        {
            ans=4*pi*a*a;
            cout<<"Area of Sphere is:"<<ans<<endl;
        }

        void  Area(int a)
        {
            ans=pi*a*a;
            cout<<"Area of Circle is:"<<ans<<endl;
        }
};

int main()
{
    float a,b;
    int r=0;

    cout<<"Enter Radius:";
    cin>>a;

    cout<<"Enter Length:";
    cin>>b;

    cout<<"Enter radius for Circle:";
    cin>>r;

    Shapes obj;

    obj.Area(a,b);
    obj.Area(a);
    obj.Area(r);
    return 0;
}

