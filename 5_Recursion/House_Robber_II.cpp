#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&nums, int i, int j){

    if(i>=j){
        return 0;
    }
    int option1 = nums[i] + solve(nums, i+2, j);
    int option2 = 0 + solve(nums, i+1, j);
    return max(option1, option2);
    }

int main()
{
    vector<int>nums = {1, 2, 3};
    int i = 0;
    int j = nums.size();
    if(j == 1){
        cout<<nums[i];
    }
    int ans1 = solve(nums, i, j-1);
    int ans2 = solve(nums, i+1, j);
    cout<<max(ans1, ans2)<<" ";
    return 0;  
}
