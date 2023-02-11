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
        int space = n - i;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }

        //for printing star
        int j = 1;
        while (j<= i)
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
//     *
//    **
//   ***
//  ****
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
        int space = n - i;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }

        //for printing star
        int j = 1;
        while (j<= i)
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
//     *
//    **
//   ***
//  ****
>>>>>>> e29a1105f189cddee4868fcbc64875253a101769
// *****