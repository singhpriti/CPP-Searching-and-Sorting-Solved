#include <iostream>
#include <vector>
using namespace std;

int getTargetIndexUsingBinarySearch(int arr[], int n,int target){
    int start =0;
    int end = n-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]== target){
            return mid;
        }else if(arr[mid] > target){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int sizeOfArr,target;
    cin>>sizeOfArr>>target;

    int binarySearchArr[sizeOfArr];

    for(int i=0; i<sizeOfArr; i++){
        cin>>binarySearchArr[i];
    }

    int ans = getTargetIndexUsingBinarySearch(binarySearchArr,sizeOfArr,target);
    cout<<ans;



    return 0;
}