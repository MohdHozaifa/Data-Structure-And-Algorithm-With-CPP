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
        while(j<=n)
        {
            cout<<i;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}

// output window
// 5
// 11111
// 22222
// 33333
// 44444
// 55555