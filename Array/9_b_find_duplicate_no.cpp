//it is solve by negative marking method.

#include<iostream>
using namespace std;

int find_duplicate_no(int arr[],int n){
    for(int i = 0; i<n; i++){
        if(arr[abs(arr[i])] < 0){                   //we can create a variable 
            return abs(arr[i]);                     // index = abs(arr[i]);
            
        }

        arr[abs(arr[i])] = arr[abs(arr[i])] * -1 ;


    }
    return -1 ;
}
int main ()
{
    int arr[5]={1,4,3,2,2};
    int n = 5;
    int ans = find_duplicate_no(arr,n);
    cout<<"The duplicate no. is : "<<ans ;
    return 0;
}