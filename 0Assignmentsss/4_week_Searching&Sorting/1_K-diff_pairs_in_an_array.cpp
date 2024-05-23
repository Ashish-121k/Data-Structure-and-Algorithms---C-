**Approach 1 : Brute force **
```
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int>>ans;
        for(int i=0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(abs(nums[i] - nums[j]) == k){
                    cout<<nums[i]<<" "<<nums[j]<<endl;
                    ans.insert({nums[i], nums[j]});
                }
            }
        }
        return ans.size();
    }
};
T.C : O(n)
S.C : O(n)
```
**Approach 2 : Two pointer **
```
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int>>ans;
        int i = 0;
        int j = 1;

        while(j<nums.size()){
            if(nums[j]-nums[i]==k){
                ans.insert({nums[i], nums[j]});
                i++;
                j++;
            }
            else if(nums[j]-nums[i] > k){
                i++;
            }
            else{
                j++;
            }
            if(i == j){
                j++;
            }
        }
        return ans.size();
    }
};
T.C : O(nlogn)
S.C : O(n)
```
**Approach 3 : Binary Search **
```
class Solution {
public:
    bool bs(vector<int>& nums, int k, int target , int s){
        int e = nums.size()-1;
        int m = (s+e)/2;

        while(s<=e){
            if(nums[m]==target){
                return true;
            }
            else if(nums[m] > target){
                e = m - 1;
            }
            else{
                s = m + 1;
            }
            m = (s+e)/2;
        }
        return false;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int>>ans;
        for(int i=0; i<nums.size(); i++){
            int x = nums[i] + k;
            if(bs(nums, k, x, i+1)){
                ans.insert({nums[i], nums[i] + k});
            }
        }
        return ans.size();
    }
};
T.C : O(nlogn)
S.C : O(n)
```
**Approach 4 : Using hashmap**
```
class Solution {
public:
    int findPairs(std::vector<int>& nums, int k) {
        if (nums.empty() || k < 0) return 0;
        
        std::unordered_map<int, int> map;
        int count = 0;
        
        for (int i : nums) {
            map[i]++;
        }
        
        for (const auto& entry : map) {
            if (k == 0) {
                if (entry.second >= 2) {
                    count++;
                } 
            } else {
                if (map.count(entry.first + k)) {
                    count++;
                }
            }
        }
        
        return count;
    }
};
