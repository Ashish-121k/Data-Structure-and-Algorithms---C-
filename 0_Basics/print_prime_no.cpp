//galat h
#include<iostream>
using namespace std;

void print_prime_no(int n)
{   
    
    
    for(int i=2 ; i<=n ; i++)
    {   
        if(i==2)
        cout<<i<<" ";
        for(int j = 2 ; j<i ; j++)
        {   
            if(i%j == 0){
                break;                  //break poore inner for loop se bhar nikaal rha h
            }

            if(i%j != 0)
            {
                cout<<i<<" ";
                break ;
               
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