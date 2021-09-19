///////////////////////////////////////////////////////
//Function Name:
//Input:4  (10 20 30 40)
//Output:40 30 20 10
//Description:Accept Number of elements from user and display in reverse order
//Date:19/09/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
   
   int iSize;
   cin>>iSize;
   int arr[iSize];
   
   for(int i=0;i<iSize;i++)
   {cin>>arr[i];}
   
   for(int i=iSize-1;i>=0;i--)
   {cout<<arr[i];}  
    return 0;
}

