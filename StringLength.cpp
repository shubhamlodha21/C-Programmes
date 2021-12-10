#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    char ch;

    cout<<"Enter a String:";
    cin>>str;

    cout<<"USING INBUILD METHOD"<<strlen(str)<<endl;

    int i=0;
    while(str[i])
    {      
        i++;
    }
    cout<<"USING SELF_CODE"<<i;

}