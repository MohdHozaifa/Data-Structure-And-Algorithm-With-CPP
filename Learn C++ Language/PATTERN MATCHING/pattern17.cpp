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
            char ch = ('A' + i + j - 2);
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
// BC
// CDE
// DEFG
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
            char ch = ('A' + i + j - 2);
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
// BC
// CDE
// DEFG
>>>>>>> e29a1105f189cddee4868fcbc64875253a101769
// EFGHI