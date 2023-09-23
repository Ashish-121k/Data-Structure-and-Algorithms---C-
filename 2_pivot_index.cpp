//Brute force approach 
#include<iostream>
using namespace std;

int pivot_index(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        int  leftSum = 0;
        int  rightSum = 0;
        for(int j = 0 ; j<i ; j++){
            leftSum = leftSum + arr[j];
        }
        for(int j = i+1 ; j<n ; j++){
            rightSum = rightSum + arr[j];
        }
        if(leftSum==rightSum)
        return i ;
    }
}

int main()
{
    int arr[6]={1,7,3,6,5,6};
    int n = 6;
    int ans = pivot_index(arr,n);
    cout<<ans;

}
