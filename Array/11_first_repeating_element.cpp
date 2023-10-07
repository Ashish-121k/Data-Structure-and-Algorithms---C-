//approach sahi hai or code bhi shi , gfg pe toh chl rha hai - pta nhi yha kyu nhi 
//chl rha

#include<iostream>
#include<vector>
using namespace std;

int first_repeating_element(vector<int>arr){
    int size = arr.size();
    //hash table creation.
    unordered_map<int, int>hash;
     for(int i = 0; i<size; i++)
    {
        hash[arr[i]]++ ;
    }
    for(int i = 0 ; i<size; i++){
        if(hash[arr[i]] > 1){
            return i + 1;
        }
    }
    return -1;
}

int main ()
{
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);

    int ans = first_repeating_element(arr);
    cout<<"first repeating element found at index : "<<ans;


    return 0;

}