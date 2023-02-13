#include<iostream>
using namespace std;
int main()
{
    int a = 3;        // a = 3 is local to int main()
    cout<<a <<endl;

    if(true)
    {
        int a = 5;    // a = 5 is local to if block and is only accessible within the if block
        cout<<a <<endl;
    }
}