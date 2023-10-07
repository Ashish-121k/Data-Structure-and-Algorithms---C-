//It is solve by binary search algorithm.
#include<iostream>
using namespace std;

int findOddOccurElement(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){

        if(s==e){
            return s ;
        }
        if(mid % 2 == 0){
            if(mid + 1 < n && arr[mid] == arr[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }

        else{
            if(mid - 1 >=0 && arr[mid - 1] == arr[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;               // mid update
    }
    return mid;
}

int main()
{
    int arr[] = {10,10,2,2,5,5,2,20,20,11,11};
    int n = sizeof (arr)/ sizeof (&arr);
    int ans = findOddOccurElement(arr,n);
    cout<<"The odd occuring element "<<arr[ans]<<" present at index : "<<ans ;
    return 0;
}