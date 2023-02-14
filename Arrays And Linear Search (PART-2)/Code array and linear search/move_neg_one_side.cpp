// two pointer approach

#include<iostream>
using namespace std;

void moveNegOneSide(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    

    while(start<end)
    {
        
        while(arr[start] < 0)
        {
            start++;
        }

        while(arr[end] > 0 )
        {
            end--;
        }

        if(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

    }
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
    int arr[10] = {46,9,49,-90,34,-78,23,-56,-45,-100};
    printArray(arr,10);
    moveNegOneSide(arr,10);
    printArray(arr,10);
    return 0;
} 
