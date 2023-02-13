#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the decimal number "<<endl;
    cin>>n;

    int div;
    int rem = 0;
    long long int ans=0;
    int i = 0;
    while(div != 0) 
   {
        div = n/2;
        rem = n%2;
        n = div;
         ans = (rem * pow(10,i) + ans);
         i = i + 1;
        //cout<<ans;
    
    }
    // for(int i=0;i<0;i--)
    // {
    //     ans;
    // }
     cout<<ans;
}


// nahi hua