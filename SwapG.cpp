////////////////////////////////////////////////////////
//Function Name:Swap
//Input:10 20
//Output:20 10
//Description: Swapping of two numbers by Generic 
//Date: 06/06/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>      // Template header
void SwapX(T &iNo1, T &iNo2)
{
    T temp;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

int main()
{
	char iValue1,iValue2;
    
    cout<<"Enter first character\n";
    cin>>iValue1;
    
    cout<<"Enter second character\n";
    cin>>iValue2;
    SwapX(iValue1, iValue2); // Swap(iVaiue1,iValue2)
    cout<<"After swap value1 is : "<<iValue1<<"\n";
    cout<<"After swap value2 is : "<<iValue2<<"\n";
    return 0;
}
