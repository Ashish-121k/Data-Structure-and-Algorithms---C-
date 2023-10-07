// this question is the best case to explain you how return value work in a function..
// it is solve by negative marking method.

#include<iostream>
using namespace std;

int missingElement(int *arr, int n){
    for (int i=0 ; i<n ; i++){

        int index = abs(arr[i]);   

        //its a 1-index based array,thats why here -1 is apply.
        if(arr[index - 1] > 0){

            arr[index - 1] = arr[index - 1] * -1;      
        }  
    }
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0 ; i<n ; i++){
        if(arr[i]>0)
      cout<<i+1<<" ";
   
    }
    cout<<endl;
  
}

int main ()
{
    int arr[5]={1,3,3,3,5};             //its a 1-index based array .
    int n = 5;
    int ans = missingElement(arr,n);
    cout<<ans;
    return 0;
}