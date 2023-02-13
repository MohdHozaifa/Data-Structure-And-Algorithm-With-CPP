#include<iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << endl;
    switch( ch ){
        case 1: cout <<" First " <<endl;
               break;

        case '1': cout<<"Second" <<endl; 
               break;

        default: cout <<" It is default case "    <<endl;                // default case is not mandatory
    }
    cout << endl;
 return 0;   
}