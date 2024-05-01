//X-or method . In this method we don't need to convert unsorted to sorted array . 
#include<iostream>
using namespace std;

void find_missing_number(int arr[], int n){
    int ans = 0 ;
    for(int i = 0 ; i<n ; i++){
       ans = ans^arr[i] ; 
    }
    for(int i = 0 ; i<=n ; i++){
        ans = ans ^ i ;
        
    }
    cout<<ans;
}


int main()
{
    int arr[8]={1,3,2,4,8,7,6}; 
    int n = 8;
    find_missing_number(arr,n);
    return 0;
}