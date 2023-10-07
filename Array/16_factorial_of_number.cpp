#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void fact(int n){
    vector<int>ans ;
    ans.push_back(1);
    int carry = 0;

    for(int i=2; i<=n; i++){
        for(int j=0; j<ans.size(); j++){

            int x = ans[j]*i + carry ;
            ans[j] = x % 10 ;
            carry = x / 10 ;
        }
        while(carry){
            ans.push_back(carry % 10);          
            carry = carry / 10 ;
            //just assume carry = 100 so 100%10 = 0 
            // and carry = 100 / 10 = 10 
            //now carry is equal to 10 AGAIN LOOP continue until
            //carrry is equal to 0.
        }

    }
    reverse(ans.begin(), ans.end());

    for (int i = 0; i <ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;

}
