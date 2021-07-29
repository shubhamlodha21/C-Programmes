////////////////////////////////////////////////////////
//Function Name:Bin
//Input:1 to 10
//Output:
//0001 0010 0011 0100 0101 0110 0111 1000 1001 1010 1011 1100 1101 1110 1111 
//Description:Display the 1 to  n numbers in binary 
//Date: 29/07/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////



#include <iostream>
#include <string>
#include <bitset>
using namespace std;
 
void generate(int n)
{
    for (int i = 1; i <= n; i++)
    {
        bitset<4> binary(i);
        cout << binary.to_string() << ' ';
    }
}
 
int main()
{
    int n = 15;
    generate(n);
 
    return 0;
}