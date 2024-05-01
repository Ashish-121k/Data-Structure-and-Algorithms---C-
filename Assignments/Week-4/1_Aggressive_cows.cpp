#include<bits/stdc++.h>
using namespace std;

//Approach 1: using linear search  
class Solution {
public:
    
    bool canWePlace(vector<int>& stalls, int cows, int dist){
        int cntcows = 1;
        int last = stalls[0];
        
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i] - last >= dist){
                cntcows++;
                last = stalls[i];
            }
            if(cntcows >= cows){
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        
        sort(stalls.begin(), stalls.end());
        int min = stalls[0];
        int max = stalls[stalls.size()-1];
        
        for(int i = 1; i<=(max-min); i++){
            
            if(canWePlace(stalls, k, i)){
                continue;
            }
            else{
                return i-1;
            }
        }
        return -1;
    }
};
/*Approach 2: Using binary search 
class Solution {
public:
    
    bool canWePlace(vector<int>& stalls, int cows, int dist){
        int cntcows = 1;
        int last = stalls[0];
        
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i] - last >= dist){
                cntcows++;
                last = stalls[i];
            }
            if(cntcows >= cows){
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        
        sort(stalls.begin(), stalls.end());
        
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        int mid;
        
        while(low <= high){
            mid = low + (high - low)/2;
            
            if(canWePlace(stalls, k, mid)){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return high;
    }
};
*/

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;
        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);
    return 0;
}