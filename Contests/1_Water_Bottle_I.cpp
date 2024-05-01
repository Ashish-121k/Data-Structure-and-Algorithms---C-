#include<iostream>
using namespace std;

int solve(int khaaliBottle, int exchange){
    int ans = khaaliBottle;
    int emptyBottle = 0;
    int newBottle = 0;

    while(khaaliBottle >= exchange){
        newBottle = khaaliBottle / exchange;
        ans = ans + newBottle;
        emptyBottle = khaaliBottle % exchange;
        khaaliBottle = newBottle + emptyBottle;
    }
    return ans;
}

int main(){
    int numsBottle;
    cin>>numsBottle;
    int exchange = 3;

    int ans = solve(numsBottle, exchange);
    cout<< ans << endl;
    return 0;

}