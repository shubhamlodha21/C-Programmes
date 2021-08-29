////////////////////////////////////////////////////////
//Function Name:Frequency
//Input:8 (85 66 3 80 93 88 11 11 )
//Output:2
//Description: . Accept N numbers from user and return frequency of 11 form it.
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

			if((Arr[i])==0)
			{

			}
			else if((Arr[i]%11)==0)
			{
				iCnt++;
			}
			
		}
		return iCnt;
	}

	 ~Numbers()
    {
        delete[]Arr;
    }

};


int main()
{
	int iNo2=0,iNo=0,iRet=0;
	

	cout<<"Enter Number of Elements";
	cin>>iNo2;

	Numbers Obj(iNo2);

	Obj.Accept();

	//Obj.Display();

	iRet=Obj.Frequency();

	cout<<"Count of 11 Number is:"<<iRet;
	
	
	return 0;
}