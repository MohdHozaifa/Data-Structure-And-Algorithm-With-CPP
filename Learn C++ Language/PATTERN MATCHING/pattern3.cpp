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
            cout<<j;
        }
        cout<<endl;
        i = i + 1;
    }
}

// output window
// 5
// 12345
// 12345
// 12345
// 12345
// 12345