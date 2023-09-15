#include<iostream>
using namespace std;

void print_prime_no(int n)
{
    for(int i=2 ; i<=n ; i++)
    {
        for(int j =2 ; j<i ; j++)
        {
            if(i%j == 0)
            {
               break ;
            }
            else
            {
                cout<<i;
                
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    print_prime_no(n);
    return 0;
}