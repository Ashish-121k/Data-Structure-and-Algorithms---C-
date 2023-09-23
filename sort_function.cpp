#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={-2,0,2,1,1,0};
    int n =6 ;
    sort(arr , arr + n);
    for (int i=0 ; i<6 ;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}