////////////////////////////////////////////////////////
//Function Name:Div
//Input:C
//Output:Exam at 9.20AM
//Description:Accept Divison from user and return timetable of exam
//Date: 13/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Division
{
    public:
    char ch;

    void Time(char ch)
    {
        if((ch=='A')||(ch=='a'))
        {
            cout<<"Exam at 7 AM";
        }
        else if((ch=='B')||(ch=='b'))
        {
            cout<<"Exam at 8.30 AM";
        }
        else if((ch=='C')||(ch=='c'))
        {
            cout<<"Exam at 9.20 AM";
        }
        else if((ch=='D')||(ch=='d'))
        {
            cout<<"Exam at 10.30 AM";
        }
        else
        {
            cout<<"Divison is not Avaliable";
        }
    }
};

    int main()
    {
        char ch='\0';

        cout<<"Enter a Character";
        cin>>ch;

        Division obj;

        obj.Time(ch);
        return 0;
    }
