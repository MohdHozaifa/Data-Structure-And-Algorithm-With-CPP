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
        char start = 'A' + n - i;
        while(j<=i)
        {
            cout<<start;
            start = start + 1;
            j++;
        }
        cout<<endl;
        i++;
    }
}


// output window
// 5
// E
// DE
// CDE
// BCDE
// ABCDE