////////////////////////////////////////////////////////
//Function Name:MaxT
//Input:10 20 22 35 
//Output:35
//Description: Accept n number from user and find maximum number by generic way
//Date: 08/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[],T iSize)
{
	T iMax=Arr[0];
	for(int i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}

	}

	return iMax;
}


int main()
{
	int *arr=NULL;
	int iSize=0,iRet=0;

	cout<<"Enter number of Elements:\n";
	cin>>iSize;

	arr=new int[iSize];

	cout<<"Enter the values:";
	for(int i=0;i<iSize;i++)
	{
		cin>>arr[i];
	}

	iRet=Maximum(arr,iSize);
	cout<<"Maximum Number is:"<<iRet;

	delete [] arr;
	return 0;
}