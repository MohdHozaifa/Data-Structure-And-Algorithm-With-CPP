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
        while(j<i)
        {
            j = j + 1;
            cout<<i;
        }
        cout<<endl;
        i = i + 1;
    }
}


// outptut window
// 5
// 1
// 22
// 333
// 4444
// 55555

