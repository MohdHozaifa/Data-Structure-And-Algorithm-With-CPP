#include<iostream>
using namespace std;

int main()
{
    char ch = '1';
    switch( ch ){
        case 1: cout <<" First " <<endl;
               break;

        case '1': cout<<"Second" <<endl; 
               break;

        default: cout <<" It is default case " <<endl;             
    }
    cout << endl;
 return 0;   
}