//Prefix Sum approach 
#include<iostream>
using namespace std;

void pivot_index(int arr[],int n){
   int leftSum[n] = {0};
   int rightSum[n] = {0};
    for(int i = 1 ; i<n ; i++){
        leftSum[i]=leftSum[i-1]+ arr[i-1];
    }
    for(int i = n-2 ; i>=0 ; i--){
        rightSum[i]=rightSum[i+1]+ arr[i+1];
    }
    for(int i = 0 ; i<n ; i++){
       if( leftSum[i]==rightSum[i])
        cout<<"Pivot Index : "<<i;
     
    }

}

int main()
{
    int arr[6]={1,7,3,6,5,6};
    int n = 6;
    pivot_index(arr,n);
    return 0;

}
