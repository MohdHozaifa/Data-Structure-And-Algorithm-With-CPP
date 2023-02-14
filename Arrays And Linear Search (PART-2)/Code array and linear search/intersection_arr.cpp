#include<iostream>
using namespace std;


int intersection(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    
    int in = 0;
    while(i<n && j<m)
    {
        if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return 0;
}
int main()
{
    int arr1[6] = {1,2,4,5,7,9};
    int arr2[3] = {2,5,9};

    int ans = intersection(arr1,6,arr2,3);
    return ans;
}