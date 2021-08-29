////////////////////////////////////////////////////////
//Function Name:Frequency
//Input:7 (85 66 3 80 93 88 90)
//Output:1
//Description:Accept N numbers from user and return difference between frequency of even number and odd numbers
//Date: 29/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
#include<stdlib.h>
#include<stdbool.h>

using namespace std;
class Numbers
{
public:
	int iSize;
	int *Arr;

	Numbers(int iValue)
	{
	    iSize=iValue;
		Arr= new int [iSize];
	}

	void Accept()
	{
		int i=0;
		cout<<"Enter Values:"<<endl;
		for(i=0;i<iSize;i++)
		{
			cin>>Arr[i];
		}
	}

	void Display()
	{
		int i=0;
		cout<<"Values Are:"<<endl;
		for(i=0;i<iSize;i++)
		{
			cout<<Arr[i];
		}
	}

	int Frequency()
	{
		int i=0,iCnt1=0,iCnt2=0;

		for(i=0;i<iSize;i++)
		{ 
			if((Arr[i]%2)==0)
			{
				iCnt1++;
			}
			else 
			{
				iCnt2++;
	     	}
		}
		return (iCnt1-iCnt2);
	}

	 ~Numbers()
    {
        delete[]Arr;
    }

};


int main()
{
	int iNo2=0,iNo=0;
	int iRet=0;

	cout<<"Enter Number of Elements";
	cin>>iNo2;

	Numbers Obj(iNo2);

	Obj.Accept();

	//Obj.Display();

	iRet=Obj.Frequency();
	
	cout<<"Frequency Difference Between  Even Numbers And Odd Numbers are:"<<iRet;
	return 0;
}