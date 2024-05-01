#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter only odd no.";

    cin>>n;
    for(int i=0 ; i<n ;i++)
    { 
        if(i<(n/2)+1)
        {
            for(int j=0 ; j<i+1 ; j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        else
        {
            for(int j=0 ; j<n-i ; j++)
            {
                cout<<"* ";
            }
            cout<<endl;

        }
    }
    return 0;
}