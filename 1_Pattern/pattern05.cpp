#include<iostream>
using namespace std;

int main()
{
    
    for(int i = 0 ; i < 5; i++)
    {
        for(int j=0 ; j < 5-i+3 ; j++)
        {
            cout<<"*";
        }
       
        int j = 5-i+3;
        while(j < 10+i-1)
        {    
          cout<<i+1;
          cout<<"*";
          j=j+2;
            
        }
        for(int j=10+i; j < 17 ; j++)
        {
           cout<<"*";
           
        }

        cout<<endl;



    }
    return 0;
}