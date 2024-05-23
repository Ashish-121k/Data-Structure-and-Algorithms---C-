Too hard  -- must try !!
**Approach 1 : Two Pointer Approach**
```
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int i=0;
        int j=n-1;

        while(j-i >= k){
            if(abs(arr[i]-x) > abs(arr[j]-x)){
                i++;
            }
            else{
                j--;
            }
        }
        return vector<int>(arr.begin() + i, arr.begin() + j + 1);
    }
};
```
**Approach 2: Using Binary search and lower bound**
```
class Solution {
public:
    int lb(vector<int>& arr, int x){
        int n = arr.size()-1;
        int s = 0;
        int e = n;
        int ans = n;

        while(s<=e){
            int m = (s+e)/2;
            if(arr[m] >= x){
                ans = m;
                e = m-1;
            }
            else{
                s = m + 1;
            }
        }
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int h = lb(arr, x);
        int l = h-1;

        while(h-l <= k){
            if(l<0){
                h++;
            }
            else if(h>arr.size()-1){
                l--;
            }
            else if(abs(arr[l]-x) > abs(arr[h]-x)){
                h++;
            }
            else{
                l--;
            }
        }
        return vector<int>(arr.begin() + l + 1, arr.begin() + h);
    }
};
```