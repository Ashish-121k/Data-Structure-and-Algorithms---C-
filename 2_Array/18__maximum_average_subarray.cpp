#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int max_avg_sum(vector<int>v , int size, int k){
    
    int ans = INT_MIN ;
  
    for(int i = 0; i<size; i++){
        int sum = 0;
        if(k<size){
            int j = i;
            while(j<k){
                sum = sum + v[j];
                j++ ;
                }
        
        }
        if(ans<sum){
            ans = sum ;
            
        }
        k++ ;
    }
    cout<<ans<<" ";
    return ans ;
}

int main()
{
    vector<int>v{1,12,-5,-6,50,3};
    int size = v.size();
    int k = 4;
    int ans = max_avg_sum(v,size,k);
    double average ;
    average = ans/(double)k ;
    cout<<average;
    return 0;
}