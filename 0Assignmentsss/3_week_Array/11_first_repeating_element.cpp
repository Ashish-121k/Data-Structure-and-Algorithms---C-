#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

/*class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    return i+1;
                }
            }
        }
        return -1;
    }
};*/

/*
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        priority_queue<int>q;
        int i = 0;
        while(i<n){
           q.push(arr[i]);
           i++;
        }
        
        int max_size = q.top() + 1;
        int *a = new int[max_size];
        for(int i = 0; i<max_size; i++){
            a[i] = 0;
        }
        
        for(int i=0; i<n; i++){
            a[arr[i]]++;
        }
        
        for(int i=0; i<n; i++){
            if(a[arr[i]]>1){
                return i+1;
            }
        }
        return -1;
    }
};*/

int first_repeating_element(vector<int>arr){
    int size = arr.size();
    //hash table creation.
    unordered_map<int, int>hash;
     for(int i = 0; i<size; i++)
    {
        hash[arr[i]]++ ;
    }
    for(int i = 0 ; i<size; i++){
        if(hash[arr[i]] > 1){
            return i + 1;
        }
    }
    return -1;
}

int main ()
{
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);

    int ans = first_repeating_element(arr);
    cout<<"first repeating element found at index : "<<ans;


    return 0;

}