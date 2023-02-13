#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"enter the number";
    cin>>n; 

    bool prime = 1;
    for(int i = 2; i<n; i++)
    {
        if(n % i == 0)
        {
            //cout<<"it is not a prime number";
            prime = 0;
            break;
        }
        
    }
        if(prime == 0){
            cout<<"its not a prime number";
        }
        else{
            cout<<"its a prime number";
        }
 }