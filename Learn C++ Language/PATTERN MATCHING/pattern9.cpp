#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;

    while(i<=n)
    {
        int j = 1;
         int val = i;
        while(j<=i)
        {
           cout<<val;
            val = val + 1;
            
            j = j+1;
        }
        cout<<endl;
        i = i + 1;

    }
}

// one more method think

// output window
// 5
// 1
// 23
// 345
// 4567
// 56789