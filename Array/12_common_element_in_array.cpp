//here is a one problem occur in case of duplicacy it repeat  the
// number .so to remove we stl function - set .
#include<iostream>
#include<vector>
using namespace std;

void common_element(int a[], int b[], int c[], int n1, int n2, int n3){
    int i = 0;
    int j = 0;
    int k = 0;
    vector <int>ans ;
    while(i<n1 && j<n2 && k<n3){
        
        if(a[i] == b[j] && b[j] == c[k]){
            ans.push_back(a[i]);
            
            i++ , j++ ,k++ ;
        }
        else if(a[i] < b[j] ){
            i++ ;
        }
        else if(b[j]<c[k]){
            j++ ; 
        }
        else {
            k++ ;
        }
   
    }
    int n = ans.size();
    for(int i=0 ; i<n ; i++){
    
     cout<<"common element are : "<<ans[i]<<" "<<endl;
    }
    
}

int main ()
{
    int a[6]={1,5,10,20,40,80}; 
    int b[5]={6,7,20,80,100};             
    int c[8]={3,4,15,20,30,70,80,120};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8; 
    common_element(a,b,c ,n1,n2,n3);
    
    return 0;


   
}