//Move all negative no on left side by Dutch National flag .
#include<iostream>
using namespace std;

void moveNegativeNo(int *arr, int n){
    int i = 0;
    int j = n-1;
    while (i<=j){
        if (arr[i] < 0){
            i++ ;
        }
            
        else if(arr[j] > 0 ){
            j-- ;

        }
        else
        swap(arr[i],arr[j]);
    }
 
}

int main()
{
    int arr[6]={1,2,-3,4,-5,6};
    int n = 6;
    moveNegativeNo(arr,n);
    for (int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;

}