#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){
    // Base Case
    if(index >= size){
    return true;
    }
    if(arr[index] >= arr[index-1]){
    //Recursive Relation
    bool ans = checkSorted(arr, size, index + 1);
    return ans;        //yha pe maine glti ki hai                     
    }
    else{
    return false;
    }
}

int main(){
    int arr[5] = {50,10};
    int size = 2;
    int index = 1;

    bool ans = checkSorted(arr,size,index);
    if(ans){
        cout<<"Array is sorted"<<endl;

    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;

}