<<<<<<< HEAD
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
        while(j<=i)
        {
            char ch = ('A' + i - 1);
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}

// output window
// 5
// A
// BB
// CCC
// DDDD
=======
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
        while(j<=i)
        {
            char ch = ('A' + i - 1);
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}

// output window
// 5
// A
// BB
// CCC
// DDDD
>>>>>>> e29a1105f189cddee4868fcbc64875253a101769
// EEEEE