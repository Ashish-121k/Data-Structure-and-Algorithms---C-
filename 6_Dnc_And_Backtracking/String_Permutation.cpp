#include<iostream>
using namespace std;

void printPermutation(string &str, int index){

    //base case
    if(index >= str.length()){
        cout<<str<<" ";
        return;
    }

    int j = index;
    while(j<str.length()){
        swap(str[index], str[j]);
        printPermutation(str, index+1);
        swap(str[index], str[j]);
        
        
    }


}

int main(){
    string str = "abb";
    int index = 0;
    printPermutation(str, index);
    return 0;
}