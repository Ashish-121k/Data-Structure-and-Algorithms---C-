//using a binary search algorithm.
#include<iostream>
using namespace std;

int searchElement(int a[], int n, int target){
    int s=0 ;
    int e=n-1 ;
    int mid;
    while(s<=e){
         mid = s+(e-s)/2 ;
        if(a[mid]==target)
            return mid ;
        else if(a[mid-1]==target)
            return mid-1 ;
        else if(a[mid+1]==target)
            return mid+1 ;
        
        else if(a[mid]<target)
            s=mid+2 ;
        else if(a[mid]>target){
            e=mid-2 ;
        }
        mid = -1 ;   
      
       
    }

    return mid ;
}

int main()
{
    int a[] = {20,10,30,50,40,70,60};
    int n = sizeof (a)/sizeof (&a);
    int target = 50 ;
    int ans = searchElement(a,n,target);
    cout<<"Element found at index : "<<ans ;
    return 0;
}