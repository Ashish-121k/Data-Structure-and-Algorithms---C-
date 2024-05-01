#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int solve(vector<vector<int>>&matrix, int i, int j, int m, int n, int &maxi){
        if(i >= m || j >= n){
            return 0;
        }
        int right_ans =  solve(matrix, i, j+1, m, n, maxi);
        int diagonal_ans = solve(matrix, i+1, j+1, m, n, maxi);
        int down_ans = solve(matrix, i+1, j, m, n, maxi);

        if(matrix[i][j] == 1){
            int ans = 1 + min(right_ans, min(diagonal_ans, down_ans));
            maxi = max(maxi, ans);
            return ans;
        }
        else{
            return 0;
        }

    }
    
int main(){
    vector<vector<int>> matrix = {
        {1, 0, 1, 0, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}
    };
        int i = 0;
        int j = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int maxi = 0;
        int find_ans = solve(matrix, i, j, m, n, maxi);
        cout<< maxi * maxi<<endl;
        return 0;
    
}