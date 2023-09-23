// solve by two pointer approach but before we sort the array by sort in-built function.
#include<bits/stdc++.h>

using namespace std;

bool key_pair(int arr2[], int n , int target)
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {   
        int sum = arr2[i]+arr2[j];
        if(sum == target){
            return true;
            break;
        }
            
        else if(sum > target){
             j-- ;
        }
        else if(sum < target){
            i++ ;
        }
  
    }
   return false;
   
}

int main()
{
    int arr[6]={1,4,45,6,10,8};
    int n =6 ;
    int target;
    cin>>target;
    int arr2[6] = {0};
    sort(arr , arr + n);
    for (int i=0 ; i<6 ;i++)
    {
        arr2[i] = arr[i];
        cout<<arr2[i]<<" ";
        
    }
    cout<<endl;
    bool ans = key_pair(arr2,n,target);
    ans ? cout<<"Found ":cout<<"Not Found ";

    return 0;
}
