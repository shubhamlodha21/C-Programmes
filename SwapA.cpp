////////////////////////////////////////////////////////
//Function Name:Swap
//Input:10 20
//Output:20 10
//Description: Swapping of two numbers by using call by Adderss
//Date: 06/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Swap(int *iNo1, int *iNo2)   // Call by address
{
    int temp;
    temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = temp;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    cout<<"Enter first number\n";
    cin>>iValue1;
    
    cout<<"Enter second number\n";
    cin>>iValue2;
    Swap(&iValue1, &iValue2); // Swap(100,200)
    cout<<"After swap value1 is : "<<iValue1<<"\n";
    cout<<"After swap value2 is : "<<iValue2<<"\n";
    return 0;
}
