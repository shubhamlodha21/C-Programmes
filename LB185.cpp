////////////////////////////////////////////////////////
//Function Name:Frequency
//Input:6 (85 66 3 80 93 88)
//Output:2
//Description:Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.
//Date: 29/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;
class Numbers
{
public:
	int No;
	int *Arr;

	Numbers(int iValue)
	{
		No=iValue;
		Arr= new int [No];
	}

	void Accept()
	{
		int i=0;
		cout<<"Values Are:"<<endl;
		for(i=0;i<No;i++)
		{
			cin>>Arr[i];
		}
	}

	void Display()
	{
		int i=0;
		cout<<"Values Are:";
		for(i=0;i<No;i++)
		{
			cout<<Arr[i];
		}
	}

	int Frequency( int iSize)
	{
		int i=0,iCnt=0;
		for(i=0;i<No;i++)
		{
			if((Arr[i])==iSize)
			{
				iCnt++;
			}
		}
		return iCnt;
	}
};

int main()
{
	int iSize=0,iNo=0,iRet=0;

	cout<<"Enter Number of Elements:";
	cin>>iNo;

	Numbers Obj(iNo);
	Obj.Accept();

	cout<<"Enter Number Whom Frequency You Want:"<<endl;
	cin>>iSize;

	iRet=Obj.Frequency(iSize);

	cout<<"Frequency of"<<iSize<<"is"<<iRet;
}
