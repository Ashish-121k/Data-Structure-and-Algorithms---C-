#include<bits/stdc++.h>
using namespace std;

//Approach 1: Brute Force Approach Or linear search approanch

class Solution 
{
    public:
    
    int ls(int A[], int N, int pages){
        int cntStudent = 1;
        long long int pageStudent = 0;
        
        for(int i=0; i<N; i++){
            if(pageStudent + A[i] <= pages){
                pageStudent += A[i];
            }
            
            else{
                cntStudent+=1;
                pageStudent = A[i];
            }
        }
        return cntStudent;
    }
    
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;
        }
        int low = *max_element(A, A+N);
        int high = accumulate(A, A+N, 0);
        
        for(int i=low; i <= high; i++){
            int st = ls(A, N, i);
            if(st == M){
                return i;
            }
        }
        return -1;
    }
};

// Approach 2 : Binary Seardch
/*
class Solution 
{
    public:
    
    int ls(int A[], int N, int pages){
        int cntStudent = 1;
        long long int pageStudent = 0;
        
        for(int i=0; i<N; i++){
            if(pageStudent + A[i] <= pages){
                pageStudent += A[i];
            }
            
            else{
                cntStudent+=1;
                pageStudent = A[i];
            }
        }
        return cntStudent;
    }
    
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;
        }
        int low = *max_element(A, A+N);
        int high = accumulate(A, A+N, 0);
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            int st = ls(A, N, mid);
            
            if(st > M){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
*/

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
