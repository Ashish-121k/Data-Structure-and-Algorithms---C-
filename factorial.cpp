#include<iostream>
using namespace std;

double factorial(int n ){

    int fact = 1;
    for(int i = 1 ; i <=n ; i++){

        fact = fact*i;
    }
    return fact ;
}
int main ()
{
    int n ;
    cin>>n;

     double fact = factorial(n);
     cout<<" The factorial is : "<<fact;
     return 0;
    

}