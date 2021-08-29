////////////////////////////////////////////////////////
//Function Name:Frequency
//Input:6 (85 66 3 80 93 88)
//Output:11 is Present
//Description: Accept N numbers from user check whether that numbers contains 11 in it or not
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
		int i=0,iCnt=0;

		for(i=0;i<iSize;i++)
		{ 
			if((Arr[i])==11)
			{
				return true;
			}

		}
		
	}

	 ~Numbers()
    {
        delete[]Arr;
    }

};


int main()
{
	int iNo2=0,iNo=0;
	bool bRet;
	

	cout<<"Enter Number of Elements";
	cin>>iNo2;

	Numbers Obj(iNo2);

	Obj.Accept();

	//Obj.Display();

	bRet=Obj.Frequency();
	if(bRet==true)
	{
		cout<<"11 is present";
	}
	else
	{
		cout<<"11 is Not Present";
	}
	
	
	return 0;
}