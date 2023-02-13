#include<iostream>
using namespace std;

int main()
{
    int num = 2;

    switch( num ){
        case 1: cout <<" First " <<endl;
               break;

        case 2: switch(num)
        {           case 2:cout<<"value of num is "<< num <<endl;
                    break;
        }
               break;

        default: cout <<" It is default case " <<endl;             
    }
    cout << endl;
 return 0;   
}