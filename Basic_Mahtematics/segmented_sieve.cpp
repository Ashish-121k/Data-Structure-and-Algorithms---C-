#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int>sieve(int n){

    vector<int>createSieve(n+1, 1);
    createSieve[0] = createSieve[1] = 0;
    for(int i = 2; i*i<=n; i++ ){
        if(createSieve[i] == 1){
            for(int j = i*i; j<=n; j+=i){
                createSieve[j] = 0;
            }
        }  
    }
    return createSieve;

}

vector<int>segmentedSieve(int L, int R){
    vector<int>givePrime = sieve(sqrt(R));       //array jisme 1 bhi hai(yaani prime) or array jisme
                                                // 0 bhi(yani non prime bhi).

    vector<int>prime;                           //complete prime array which is used for marking .
    for(int k = 0; k<=givePrime.size(); k++){
        if(givePrime[k] == 1){
            prime.push_back(k);
        }
    }
    
    vector<int>dummyArray(R-L+1, 1);
    for(int i = 0; i<=prime.size(); i++){
        int pr = prime[i];
        int first_mul = (L/pr)*pr ;
        if(first_mul < L){
            first_mul+=pr;
        }
        for(int j = max(first_mul, pr*pr); j<=R; j+=pr){
            dummyArray[j-L] = 0;
        }
    }
    return dummyArray;
}

int main(){
    int L=110;
    int R=130;
    vector<int>primeAns = segmentedSieve(L, R);
    for(int i=0; i<primeAns.size(); i++){
        if(primeAns[i] == 1){
            cout<<L+i<<" ";
        }
    }    
    return 0;
}