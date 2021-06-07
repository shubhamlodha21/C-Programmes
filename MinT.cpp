////////////////////////////////////////////////////////
//Function Name:MinT
//Input:4  (10 20 22 35) 
//Output:10
//Description: Accept n number from user and find Minimum number by generic way
//Date: 08/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
class Array
{
private:
	T *Arr;
	int iSize;

public:
	Array(int iNo)
	{
		iSize=iNo;
		Arr=new T[iSize];
	}
	~Array()
	{
		delete[] Arr;
	}

	void Accept()
	{
		cout<<"Enter the Values\n";
		for(int i=0;i<iSize;i++)
		{
			cin>>Arr[i];
		}
	}

	T Minimum()
	{
		T Min=Arr[0];

		for(int i=0;i<iSize;i++)
		{
			if(Arr[i]<Min)
			{
				Min=Arr[i];
			}
		}
		return Min;

	}
};

int main()
{
    int iRet=0;
    int iNo=0;

    cout<<"Enter Number of Elements";
    cin>>iNo;

    Array<int>*obj1=new Array <int>(iNo);
    obj1->Accept();
    iRet=obj1->Minimum();
    cout<<"Minimum Number is"<<iRet;

    Array<double>*obj2=new Array <double>(iNo);
    obj2->Accept();
    iRet=obj2->Minimum();
    cout<<"Minimum Number is"<<iRet;
    delete obj1;


}
