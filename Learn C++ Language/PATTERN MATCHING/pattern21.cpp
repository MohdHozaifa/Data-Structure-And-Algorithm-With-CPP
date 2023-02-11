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
        // for printing space
        int j = 1;
        int space = 1;
        while(space < i)
        {
            cout<<" ";
            space++;
        }

        while(j<=n-i+1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}


// output window
// 5
// *****
//  ****
//   ***
//    **
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
        // for printing space
        int j = 1;
        int space = 1;
        while(space < i)
        {
            cout<<" ";
            space++;
        }

        while(j<=n-i+1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}


// output window
// 5
// *****
//  ****
//   ***
//    **
>>>>>>> e29a1105f189cddee4868fcbc64875253a101769
//     *