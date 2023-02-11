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
        while(j<=n)
        {
            char ch = 'A' + i -1;
            cout<<ch;
            j = j + 1;
        } 
        cout<<endl;
        i = i + 1;
    }
}

// output window
// 5
// AAAAA
// BBBBB
// CCCCC
// DDDDD
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
        while(j<=n)
        {
            char ch = 'A' + i -1;
            cout<<ch;
            j = j + 1;
        } 
        cout<<endl;
        i = i + 1;
    }
}

// output window
// 5
// AAAAA
// BBBBB
// CCCCC
// DDDDD
>>>>>>> e29a1105f189cddee4868fcbc64875253a101769
// EEEEE