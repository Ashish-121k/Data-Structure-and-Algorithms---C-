#include<iostream>
using namespace std;

//to solve this ques by making pair . 

bool find_key_pair(int arr[] , int size , int target){
    for(int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if (arr[i] + arr[j] == target)
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[6]={1,4,45,6,10,8};
    int size = 6;
    int target;
    cin>>target;
    bool ans = find_key_pair(arr , size , target);
    ans ? cout<<"Found ":cout<<"Not Found";
    return 0;

}
