#include<iostream>
#include<vector>
using namespace std;

vector<int>find(int *arr, int size, int target, int i){

    vector<int>ans;         //vector ans har baar create hoga..
    //base case
    if(i >= size){
        return ans;
    }
    if(arr[i]==target){
        ans.push_back(i);
    }
    //recursive call to search for ans in the rest of the array
    vector<int>aageKaAns = find(arr, size, target, i + 1);

    //merge indices found in the rest of the arrray with the current ones
    ans.insert(ans.end(), aageKaAns.begin(), aageKaAns.end());
    return ans;
}

int main(){
    int arr[6]={10,20,10,10,30,40};
    int size = 6;
    int target = 10;
    int index = 0;
    vector<int>ans = find(arr, size, target, index);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}