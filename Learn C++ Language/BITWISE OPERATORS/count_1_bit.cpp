#include<iostream>
using namespace std;

// unit32_t convert decimal number to binary automatically
int hammingWeight( uint32_t n)
{
    int ans = 0;
    while(n!=0)
    {
        if(n&1)
        {
            ans++;
        }
        n = n>>1;
    }
    return ans;
}
int main()
{
    int answ =  hammingWeight( 15 );
    cout<<answ;
}