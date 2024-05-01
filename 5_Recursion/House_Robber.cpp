#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& nums, int i){

    //base case
    if(i>=nums.size()){
        return 0;
    }         
    int ans1 = nums[i] + solve(nums, i+2);
    int ans2 = 0 + solve(nums, i+1);
    int ans = max(ans1, ans2);
    return ans;
    }

int main(){
    vector<int>nums = {1, 2, 3, 1};
    int i = 0;
    int ans = solve(nums, i);
    cout<<ans<<" ";
    return EXIT_SUCCESS;
}
