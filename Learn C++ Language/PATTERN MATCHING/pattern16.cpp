#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 1;

    char ch = 'A';

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<ch;
            ch++;
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
// DEF
// GHIJ
// KLMNO