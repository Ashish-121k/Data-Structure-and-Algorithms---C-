#include<iostream>
using namespace std;


int main ()
{
    int arr[5]={3,1,4,2,3};
   for(int i = 0; i<5; i++){
       for(int j = i+1 ; j<5 ; j++){
           if(arr[i] != arr[j]){
               continue;
           }
           else{
               cout<<"The duplicate no. is : "<<arr[i];
           }
       }
   }
   
    return 0;
}