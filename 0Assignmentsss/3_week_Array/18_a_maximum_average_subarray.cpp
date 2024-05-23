// solve by sliding window .
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int max_avg_sum(vector<int>v , int size , int k){
    int sum = 0;
    int ans = INT_MIN;
    int i = 0;
    int j = k;                
    for(int y = i ; y<k ; y++){
        sum = sum + v[y] ;  
    }
    ans = sum ;                     
    if(j<size){
        sum = sum - v[i] + v[j];
       
        if(ans<sum){
        ans = sum ;
        }
        i++;
        j++;
    }
    
    
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