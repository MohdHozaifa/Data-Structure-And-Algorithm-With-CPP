#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i= 1;
    int count = 0;

    while(i<=n)
    {
        int j = 1;
        
        while(j<=i)
        {
            count++;
            j = j + 1;
            cout<<count<<" ";
        }
        
        cout<<endl;
        i = i + 1;
    }
}


// output window
// 5
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15