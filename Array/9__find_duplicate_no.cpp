//Ques. find duplicate no. in an unsorted array where element are present 
//from 1 to n. 
//Ans. first it will be sorted 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/*int find_duplicate_no(int arr[],int n){

    int i = 0; 
    while(i<=5)
    {
        if(arr[i] == i+1){
           i++;
        }
        else{
            return i;
        }
    }
}*/

int find_duplicate_no(int arr[],int n){        

    for(int i = 0; i<n; i++) 
    {
        if(arr[i] == i+1){
           continue ;
        }
        else{
            return i;
        }
        
    }
  return -1;  
}

int main ()
{
    int arr[]={2,1,2,3,4};
    int n = 5;
    sort(arr , arr + n);        //remember to put header file .
    int ans = find_duplicate_no(arr,n);
    cout<<ans ;
    return 0;
}