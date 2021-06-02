////////////////////////////////////////////////////////
//Function Name:WordReverse
//Input : _ _Abc_ _ _ p15_ _ _&_ _ AB_ _
// Output : _ _cbA_ _ _ 51p_ _ _& _ _BA_ _
//Description:Reverse The Given Word 
//Date: 02/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    void WordReverse()
    {
        
        int iCnt = 0,temp=0;
        char *ptr = str,*start,*end;
        
        while(*ptr != '\0')
        {
            if(*ptr == ' ')
            {
                while((*ptr == ' ') && (*ptr != '\0'))
                {ptr++;}
            }
            else
            {
                start=ptr;
                end=ptr;
                while((*ptr != ' ') && (*ptr != '\0'))
                {  
                  iCnt++;
                  ptr++;  
                }
                 while((*end != ' ') && (*end != '\0'))
                {  
                  end++;  
                }
                end--;
                while(start<end)
                {
                	temp=*start;
                	*start=*end;
                	*end=temp;
                	start++;
                	end--;
                }
                }
            }
        }
    };
    
int main()
{
    int ret = 0;
    StringX obj;
    obj.Accept();
    obj.WordReverse();
    cout<<obj.str;
    return 0;
}
