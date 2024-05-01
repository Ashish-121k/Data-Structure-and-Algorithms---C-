//Move all negative no on left side by two pointer approach .
#include<iostream>
using namespace std;

int moveNegativeNo(int arr[], int n){
    int i = 0;
    int j = n-1;
    while (i<=j){
        if (arr[i] > 0 && arr[j] > 0){
            j-- ;
        }
            
        else if(arr[i] > 0 && arr[j] < 0){
            swap(arr[i],arr[j]);
            i++ ; 
            j-- ;

        }
        else if(arr[i]<0){
            i++ ;
        }
      
    }
   return 0;
}

int main()
{
    int arr[6]={-1,2,-3,4,-5,6};
    int n = 6;
    moveNegativeNo(arr,n);
    for (int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;

}