#include<bits\stdc++.h>
using namespace std;

bool ispossible(vector<int>rank, int np, int mid){
    int currP = 0;
    for(int i=0; i<rank.size(); i++){
        int j = 1;
        int time = 0;
        while(true){
            if(time + j*rank[i] <= mid){
                time += rank[i]*j;
                ++currP;
                ++j;
            }
            else{
                break;
            }
        }
        if(currP >= np){
            return true;
        }
    }
    return false;
}

int solve(vector<int>rank, int np){
    int maxi = *max_element(rank.begin(), rank.end());
    int low = 0;
    int high = maxi*(np*(np+1)/2);
    int ans = -1;

    while(low <= high){
        int mid = low + high >>1;
        if(ispossible(rank, np, mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int t, np, L;
    cin>>t;
    while(t--){
        cin>>np;
        cin>>L;
        vector<int>rank;

        for(int i=0; i<L; i++){
            int element;
            cin>>element;
            rank.push_back(element);
        }
        int ans = solve(rank, np);
        cout<<"ans : "<<ans<<endl;
    }
    return 0;
}