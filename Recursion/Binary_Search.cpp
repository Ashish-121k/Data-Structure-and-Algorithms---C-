#include<iostream>
using namespace std;

int search(int arr[], int size, int target, int s, int e){
    
    //if target does not found
    if(s>e){
        return -1 ; 
    }
    int mid = s + (e-s)/2 ;

    //base case
    if(arr[mid] == target){
        return mid;
    }
    
    else if(arr[mid] < target ){
        return search(arr, size, target, mid+1, e);
    }

    else if(arr[mid] > target){
        return search(arr, size, target, s, mid-1);
    }
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 60;
    int s = 0;
    int e = size - 1;

    int ans = search(arr, size, target, s, e);
    cout<<"Target found at index : "<<ans;
    return 0;

} 