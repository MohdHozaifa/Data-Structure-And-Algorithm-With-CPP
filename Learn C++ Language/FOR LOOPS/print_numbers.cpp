#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" enter the value of n " <<endl;
    cin>> n;

    cout <<"printing count from 1 to n is " <<endl;

    // for(int i = 1; i<=n; i++)
    // {
    //     cout<<i<<endl;
    // }

    // or

    int i = 1;
    for(; i<=n; )
    {
        cout<<i<<endl;
        i++;
    }
}
