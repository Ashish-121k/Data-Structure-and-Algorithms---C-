#include<iostream>
using namespace std;


bool even_odd(int n ){
    if(n&1==1){
    return false; 
    }
    else
        return true;
    
}

int main()
{
    int n; 
    cin>>n;
     
    
    bool even_or_not = even_odd(n);

   even_or_not ? cout<<"Even" : cout<<"Odd";    // ternary operator 
   return 0;

}