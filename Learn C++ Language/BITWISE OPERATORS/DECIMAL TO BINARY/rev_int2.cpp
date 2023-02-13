#include<iostream>
#include<limits.h>
using namespace std;

// int rev2(int x)
// {
//     int ans = 0;

//     while(x!=0)
//     {
//         int digit = x%10;
//         ans = (ans * 10) + digit;
//         x = x/10;
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     n = rev2(7234567543);  // here overflow is comming so we have to use other code to set in reange (-2^31) to (2^31)-1
//     cout<<n;
// }

int rev3(int x)
{
    int ans = 0;

    while(x!=0)
    {
        int digit = x%10;
        //int = INT_MAX, INT_MIN;
        if( (ans>INT_MAX/10) || (ans < INT_MIN/10) )
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x/10;
        
    }
    return ans;
}

int main()
{
    int n;
    n = rev3(72385754323);                       //  set in reange (-2^31) to (2^31)-1
    cout<<n;
}