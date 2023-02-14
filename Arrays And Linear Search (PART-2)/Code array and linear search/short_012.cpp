#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==2 && left < right){
            right--;
        }

        if(arr[left] == 1 && left < right)
        {
             swap(arr[left], arr[left + 1]);
        }

        if(arr[right] == 1 && left < right)
        {
            swap(arr[right], arr[right - 1]);
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(arr[left]==2 && arr[right]==0 && left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}

int main() {

    int arr[8] = {1,2,0,1,0,0,2,1};

    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;
}

// not correct