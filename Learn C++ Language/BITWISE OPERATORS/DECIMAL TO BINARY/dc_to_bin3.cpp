#include <iostream>
#include<math.h>
using namespace std;
//convert decimal to binary
int convert(int num) {
   for (int i = 31; i >= 0; i--) {
      int k = num >> i;
      if (k & 1)
         cout << "1";
      else
         cout << "0";
   }
}
int main() {
   int num = 25;

   convert(num);
   cout<<endl;
   
}