// it is solve by simple sorting  + swappimg method.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void sortt(int arr[], int n){
    int i = 0;
    while(i<n){
        int index = arr[i] - 1;
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
        }
        else{
            ++i;
        }
    }
}


int main ()
{
    int arr[5]={1,3,3,4,5};             //its a 1-index based array .
    int n = 5;
    sortt(arr,n);
    for (int i = 0 ; i<n ; i++){
        if(arr[i] != i+1){
           cout<<i+1<<" ";

        }
        else if(i>n)
        cout<<"There is no missing element";
    }
    

    return 0;
}