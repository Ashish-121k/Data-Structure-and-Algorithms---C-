#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int  addition(vector<int>v1, vector<int>v2, int n, int m){
 
    int i = n-1;
    int j = m-1;
    int carry = 0;
    vector<int>ans;

    //jbb dono vector array (v1 or v2 ) ki individual value add ho rahi ho.
    while(i>=0 && j>=0){
        int v = v1[i] + v2[j] + carry ;
        int r = v % 10;
        ans.push_back(r);
        carry = v/10 ;
        i--;
        j--;
    }
    // jbb sirf ek vector(v1) add ho raha ho .
    while(i>=0){
        int v = v1[i] + 0 + carry ;
        int r = v % 10;
        ans.push_back(r);
        carry = v/10 ;
        i--;
        j--;
    }
    // jbb sirf ek vector(v2) add ho raha ho .
    while(j>=0){
        int v = 0 + v2[j] + carry ;
        int r = v % 10;
        ans.push_back(r);
        carry = v/10 ;
        i--;
        j--;

    }

    reverse(ans.begin(),ans.end());
    
     for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
  

    return -1 ;
  
}

int main()
{
    vector<int>v1{9, 0, 3, 7};
    vector<int>v2{5, 6, 7};
    int n = v1.size();
    int m = v2.size();
   
    addition(v1, v2, n, m);
   
   
    return 0;
}