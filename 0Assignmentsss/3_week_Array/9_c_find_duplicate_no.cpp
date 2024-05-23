//It is solve by positioning method.
#include<iostream>
using namespace std;

int find_duplicate_no(int arr[],int n){
    
    while(arr[0] != arr[arr[0]]){

        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];


}

int main ()
{
    int arr[5]={1,3,3,2,4};
    int n = 5;
    int ans = find_duplicate_no(arr,n);
    cout<<"The duplicate no. is : "<<ans ;
    return 0;
}