#include<iostream>
#include<vector>
using namespace std;

void remove_duplicate(vector<int>a , int n){
    int i = 0;
    int j = 1;

    while(j<n){
        if(a[i] == a[j]){
            j++;

        }
        else{
            i++;
            a[i]=a[j];                          //you can use  swap(a[i],a[j]) as well        
            cout<<a[i]<<" "<<a[j]<<" "<<endl;                 
            j++ ;

        }

    }
    for(int i =0 ; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"After this index all element is duplicate : " <<i+1 ;


}

int main()
{
    vector<int>a{0,0,1,1,1,2,2,3,3,4};
    int n = a.size();
     remove_duplicate(a,n);
   
    return 0;
}