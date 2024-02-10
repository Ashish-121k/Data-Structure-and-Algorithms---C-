#include<iostream>
#include<string>
using namespace std;

int solve(string &word1, string &word2, int i, int j){
    if(i >= word1.length()){
       return word2.length() - j;
    }
    if(j >= word2.length()){
       return word1.length() - i;
    }

    int min_ans = 0;
    if(word1[i] == word2[j]){
       min_ans = solve(word1, word2, i+1, j+1);
    }
    else{
        int insert_ans = 1 + solve(word1, word2, i, j+1);
        int delete_ans = 1 + solve(word1, word2, i+1, j);
        int replace_ans = 1 + solve(word1, word2, i+1, j+1);
        min_ans = min(insert_ans, min(delete_ans, replace_ans));
    }
        return min_ans;

    }
int main(){
    string word1 ="horse";
    string word2 ="ros";
    int i = 0;
    int j = 0;
    int ans = solve(word1, word2, i, j);
    cout<<ans<<endl;
    return 0;
}