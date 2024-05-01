#include<bits\stdc++.h>
using namespace std;

//Approach : 1 Using linear search
/*
bool ispossible(vector<int>height, int m, int bladeheight){
    int sum = 0;
    for(int i = 0; i<height.size(); i++){
        if(height[i] > bladeheight){
            sum += height[i] - bladeheight;
        }
    }
    if(sum >= m){
        return true;
    } 
    return false;   
}
int solve(vector<int>height, int m){
    int high = *max_element(height.begin(), height.end());
    int low = 1;     //int low = *min_element(height.begin(), height.end());
    int a = -1;
    for(int i=low; i<=high; i++){
        if(ispossible(height, m, i)){
            a = i;
        }
    }
    return a;
}
*/

//Approach 2: using binary search
bool ispossible(vector<int>height, int m, int bladeheight){
    int sum = 0;
    for(int i = 0; i<height.size(); i++){
        if(height[i] > bladeheight){
            sum += height[i] - bladeheight;
        }
    }
    if(sum >= m){
        return true;
    } 
    return false;   
}
int solve(vector<int>height, int m){
    int high = *max_element(height.begin(), height.end());
    int low = 0;
    int a = -1;
    while(low <= high){
       int mid = low + high >> 1;
       if(ispossible(height, m, mid)){
            a = mid;
            low = mid + 1;
       }
       else{
            high = mid - 1;
       }
    }
    return a;
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<int>height;
    while(n--){
        int element;
        cin>>element;
        height.push_back(element);
    }
    int ans = solve(height, m);
    cout<<ans<<endl;
    return 0;
}