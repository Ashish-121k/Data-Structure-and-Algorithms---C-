#include<iostream>
using namespace std; 

bool prime_no(int n){
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
       
            return false;
        }     
      
       
    }
    return true;
}


int main ()
{
   int n;
   cin>>n ;

  bool ans = prime_no(n); 
  ans ? cout<<" prime no " : cout<<" not a prime no";
  return 0;
  }