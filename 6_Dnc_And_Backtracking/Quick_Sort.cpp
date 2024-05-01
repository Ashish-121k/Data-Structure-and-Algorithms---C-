#include<iostream>
using namespace std;

void quickSort(int arr[], int start, int end){

    //base case
    if(start >= end){
        return;
    }

    int i = start - 1;
    int j = start;
    int pivot = end;

    while(j < pivot){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);

    //recursive relation
    quickSort(arr, start, i-1);
    quickSort(arr, i+1, end);

    
}

int main(){
    int arr[] = {23, 45, 12, 35, 40, 17, 15};
    int start = 0;
    int end = 6;
    cout<<"Unsorted Array : ";
    for(int i=0; i<=end; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    
    quickSort(arr, start , end);

    cout<<"Sorted Array : ";
    for(int i=0; i<=end; i++){
        cout<<" "<<arr[i];
    }
    return 0;
}