#include<iostream>
using namespace std;


bool even_odd(int n ){
    if(n%2==0){
    return true; 
    }
    else
        return false;
    
}

int main()
{
    int n; 
    cin>>n;
     
    
    bool even_or_not = even_odd(n);

   even_or_not ? cout<<"Even" : cout<<"Odd";
   return 0;

}