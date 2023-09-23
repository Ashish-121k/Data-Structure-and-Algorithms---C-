//counting method
#include<iostream>
using namespace std;

int sort_color(int arr[], int n){
    int countZeros = 0;
    int countOnes = 0;
    int countTwos = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==0)
        countZeros++ ;
        else if(arr[i]==1)
        countOnes++ ;
        else
        countTwos++ ;
    }
    int i = 0;
    while(countZeros--){
        arr[i]=0 ;
        i++ ;
    }
    while(countOnes--){
        arr[i]=1 ;
        i++ ;
    }
    while(countTwos--){
        arr[i]=2 ;
        i++ ;
    }
    return 0 ;
}

int main()
{
    int arr[6]={2,0,2,1,1,0}; //here red = 2 ; white = 0 ; green = 1
    int n = 6;
    sort_color(arr,n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}