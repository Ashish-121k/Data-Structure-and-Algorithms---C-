//It is in-place Two pointer method.
#include<iostream>
using namespace std;

int sort_color(int arr[], int n){
    int i = 0;
    int j = n-1;

    for(int i=0 ; i<=j ; i++){
        if(arr[i]==2){
            swap(arr[i],arr[j]);
            j-- ;
        }
        else if(arr[i]==1){
            swap(arr[i],arr[j]);
            j-- ;
        }
        else{
            continue ;
        }
    } 
    return 0;
}

int main()
{
    int arr[6]={2,0,2,1,1,0}; //here red = 2 ; white = 0 ; green = 1
    int n = 6;
    sort_color(arr,n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}