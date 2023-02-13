#include<iostream>
using namespace std;

int bitComp(int n)
{
    
    int m = n; 
    int mask = 0; 
     if(n == 0)
    {
        return 1;
    }
     while(m!=0)
    {
        mask = (mask<<1) | 1;     
        m = (m>>1);
    }
    int ans = (~n) & mask;
    return ans;
}

int main()
{
    int number;
    cin>>number;

    int num = bitComp(number);
    cout<<num;
}