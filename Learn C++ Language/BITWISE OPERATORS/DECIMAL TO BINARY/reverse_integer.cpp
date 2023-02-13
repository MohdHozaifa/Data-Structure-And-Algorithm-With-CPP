#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the number you want ";
    cin>> n;

   
     int rem = 0;
   
    while(n!=0)
    {
        rem = n%10;
        n = n/10;
        cout<<rem;
    }
   
    
}