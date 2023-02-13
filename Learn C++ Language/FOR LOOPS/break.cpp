#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" enter the value of n " <<endl;
    cin>> n;

    cout <<"printing count from 1 to n is " <<endl;

    int i = 1;
    for( ; ; )
    {
        if (i <= n)
        {
            cout<<i <<endl;
        }
        // else                      // without using break it is continuously running with some garbage value
        // {
        //     break;
        // }
        i++;
    }
}