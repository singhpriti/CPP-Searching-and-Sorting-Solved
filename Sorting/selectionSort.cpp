/* Sorting means an arrangement of elements in an ordered sequence either in
increasing(ascending) order or decreasing(descending) order. Sorting is very important and
many softwares and programs use this. Binary search also requires sorting. There are
many different sorting techniques. */


/* Selection sort:
Steps: (sorting in increasing order)
1. First-of-all, we will find the smallest element of the array and swap that with the
element at index 0.
2. Similarly, we will find the second smallest and swap that with the element at index 1
and so on…
3. Ultimately, we will be getting a sorted array in increasing order */

#include<iostream>
#include<vector>

using namespace std;

void getSortedArrayUisngSelectionSort(int arr[], int n){

    for (int i=0; i<n-1; i++){
        int minElement = arr[i];
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < minElement){
                minElement = arr[j];
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    getSortedArrayUisngSelectionSort(arr,n);
    for(int i=0; i<n; i++){
       cout<<arr[i];
    }

    return 0;
}