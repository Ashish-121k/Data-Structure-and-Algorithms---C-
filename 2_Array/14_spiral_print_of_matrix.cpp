#include<iostream>
#include<vector>
using namespace std;

void spiral_print(vector<vector<int>>v){

    int m = v.size();
    int n = v[0].size();
    int total_element = m*n ;

    int startingRow = 0;
    int endingCol = n-1;
    int endingRow = m-1;
    int startingCol = 0;
    int count = 0;

    while(count<total_element){
        //first row print 
        for(int i=startingCol; i<=endingCol; i++){
            cout<<v[startingRow][i]<<" ";
            count++ ;
        }
        startingRow++ ;

        //last col print 
        for(int i =startingRow ; i<=endingRow ; i++){
            cout<<v[i][endingCol]<<" ";
            count++ ;
        }
        endingCol-- ;

        //last row print
        for(int i = endingCol; i>=startingCol; i--){
            cout<<v[endingRow][i]<<" ";
            count ++ ;
        }
        endingRow-- ;
         //first column print 
         for(int i = endingRow; i>=startingRow ; i--){
            cout<<v[i][startingCol]<<" ";
            count ++ ;
        }
        startingCol++ ;

    }


}

int main()
{
    vector<vector<int>>v {
        {1,2,3,4} , 
        {5,6,7,8} , 
        {9,10,11,12} ,
        {13,14,15,16}
    };

    spiral_print(v);
    return 0;

}