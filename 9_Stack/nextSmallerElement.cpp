#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void solve(int arr[], int n, vector<int>& ans){
    stack<int> st;
    st.push(-1);

    for(int i = n-1; i>=0; i--){
        while(st.top() >= arr[i]){
            st.pop();
        }
        ans.push_back(st.top());
        st.push(arr[i]);
    }

}

int main(){
    int arr[5] = {8, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>ans;
    solve(arr, n, ans);
    for(int i = n-1 ; i>=0; i--){
        cout<< ans[i] <<" ";
    }
    return 0;

}