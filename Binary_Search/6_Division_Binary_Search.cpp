#include<iostream>
using namespace std;

int findQuotient(int divisor , int dividened){
    int s = 0;
    int e = 29;
    int ans = -1;

    while(s<=e){
        int mid = s + (e-s)/2 ;
        if (mid * divisor >= dividened){
            e = mid - 1 ;

        }
        else if(mid * divisor <= dividened){
            ans = mid ;
            s = mid + 1 ;
        }
    }
    return ans;
}

int main()
{
    int divisor = 7 ;
    int dividened = 36 ;
    int ans =  findQuotient(divisor, dividened);
    cout<<"The Quotient is : "<<ans ;
    return 0;
}