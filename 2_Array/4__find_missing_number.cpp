//sorting method or simple method when we have a sorted array . If there is unsorted array , 
//then convert in sorted array. 
#include<iostream>
using namespace std;

/*void find_missing_number(int arr[], int n){
    for(int i = 0 ; i<n ; i++){
        if(arr[i] != i+1){
       
            cout<<"Missing number is : "<<i+1;
            break;
        }
    }
    
}
*/

void find_missing_number(int arr[], int n){
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == i+1)
        continue ;
        else{
            cout<<"Missing number is : "<<i+1;
            break;
        }
    }
    
}

int main()
{
    int arr[8]={1,2,3,4,5,6,8,9}; 
    int n = 8;
    find_missing_number(arr,n);
    return 0;
}