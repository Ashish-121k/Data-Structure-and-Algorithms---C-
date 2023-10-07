// it is solve by simple sorting method.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main ()
{
    int arr[5]={1,3,3,4,5};             //its a 1-index based array .
    int n = 5;
    sort(arr, arr + n);
    for (int i = 0 ; i<n ; i++){
        if(arr[i] != i+1){
           cout<<i+1<<" ";

        }
        else if(i>n)
        cout<<"There is no missing element";
    }
    

    return 0;
}