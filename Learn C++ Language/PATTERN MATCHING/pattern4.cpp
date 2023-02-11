#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;

    while(i<=n)
    {
        int j = 0;
        while(j<n)
        {
            j = j + 1;
            cout<<n-j+1;
        }
        cout<<endl;
        i = i + 1;
    }
}

// output window
// 5
// 54321
// 54321
// 54321
// 54321
// 54321