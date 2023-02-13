//                                                      approach 1
//#include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;

// bool power(int n);
// {
//      for(int i = 0; i < 31 ; i++)
//     {
//         if(n == pow(2,i))
//         {
//             return true;
//             //break;
//         }
//         return false;
//     }

// }

// }


//                                                                 approach 2
// #include <iostream>
// #include <limits.h>
// using namespace std;

// bool isPower(int n)
// {
//     int temp = 1;
//     while (n != temp && temp < INT_MAX / 2)
//     {
//         temp *= 2;
//         cout << temp << " ";
//         if (n == temp)
//         {
//             return 1;
//             break;
//         }
//     }
    
//     return 0;
// }

// int main()
// {
    // int n;
    // cout<<"Enter the number  ";
    // cin>>n;

//     bool found = isPower(64);
//     if (found)
//     {
//         cout << "yes";
//     }
//     else
//     {
//         cout << "no";
//     }
//     return 0;
//    /* {
//         int temp = 1;
//         while(n!=temp && temp<INT_MAX/2)
//         {
//             temp *= 2;
//         }
//         return (n == temp);
//     }
//     */
// }

//                                                                      approach 3

#include<iostream>
using namespace std;

bool isPower2(int num)
{
    if(num<=0)
    {
        return false;
    }
    return(num & (num-1)) == 0;
}

int main( )
{
    int n;
    cout<<"Enter the number  ";
    cin>>n;

    bool found = isPower2(n);
    cout<<found;
}
