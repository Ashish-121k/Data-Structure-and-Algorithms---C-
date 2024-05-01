#include<iostream>
using namespace std;

void merge(int arr[], int size, int s, int e){

    int mid = s + (e-s)/2;
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;

    int *leftArr = new int[lenLeft];
    int *rightArr = new int[lenRight];

    int k = s;

    for(int i=0; i<lenLeft; i++){
        leftArr[i] = arr[k];
        k++;
    }
    
    k = mid + 1 ;

    for(int i=0; i<lenRight; i++){
        rightArr[i] = arr[k];
        k++;
    }
    
    //actual merge operation

    int mainArrayIndex = s;
    int leftArrIndex = 0;
    int rightArrIndex = 0;

    while(leftArrIndex < lenLeft && rightArrIndex < lenRight){
        if(leftArr[leftArrIndex] <= rightArr[rightArrIndex]){
            arr[mainArrayIndex] = leftArr[leftArrIndex];
            leftArrIndex ++;
            mainArrayIndex ++;
        }
        else{
            arr[mainArrayIndex] = rightArr[rightArrIndex];
            rightArrIndex ++;
            mainArrayIndex ++;
        }
       
    }

    while(leftArrIndex < lenLeft){
        arr[mainArrayIndex] = leftArr[leftArrIndex];
        mainArrayIndex ++;
        leftArrIndex ++;
    }
    while(rightArrIndex < lenRight){
        arr[mainArrayIndex] = rightArr[rightArrIndex];
        mainArrayIndex ++;
        rightArrIndex ++;
    }

    delete [] leftArr;
    delete [] rightArr;
    

}

void mergeSort(int arr[], int size, int s, int e){

    //base case 
    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;

    mergeSort(arr, size, s, mid);       
    mergeSort(arr, size, mid+1, e);
    merge(arr, size, s, e);


}


int main(){
    int arr[] = {49, 38, 38, 67, 23};
    int size = 5;
    int s = 0;
    int e = size - 1;
    cout<<"Unsorted Array : ";
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

    mergeSort(arr, size, s, e);

    cout<<"Sorted Array : ";
    for(int i=0; i<size; i++){
        
        cout<<" "<<arr[i];
    } 
    cout<<endl;
    return 0;
    
}