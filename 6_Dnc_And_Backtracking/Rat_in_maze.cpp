#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int maze[][4], int newx, int newy, int row, int col, vector<vector<bool>>&visited){
    if((newx >= 0 && newx <= row-1 )&& 
       (newy >=0 && newy <= col-1)&&
       (maze[newx][newy] == 1 &&
       visited[newx][newy] == false)
    ){
        return true;
    }
    {
        return false;
    }
    
}

void moveMent(int maze[][4], int srcx, int srcy, int row, int col, vector<vector<bool>>&visited, string &output){

    //base case
    if(srcx == row-1 && srcy == col-1){
        cout<<output<<endl;
        return ;
    }

    int newx = srcx+1;
    int newy = srcy;

    //Downward
    if(isSafe(maze, newx, newy, row, col, visited)){
        //processing
        visited[newx][newy] = true;

        //recursive relation
        output.push_back('D');
        moveMent(maze, newx, newy, row, col, visited, output);

        //Backtraking
        visited[newx][newy] = false;
        output.pop_back();
    
        
    }


     //Left
    newx = srcx;
    newy = srcy-1;
    if(isSafe(maze, newx, newy, row, col, visited)){

        //processing
       
        visited[newx][newy] = true;

        //recursive relation
        output.push_back('L');
        moveMent(maze, newx, newy, row, col, visited, output);

        //Backtraking
        output.pop_back();
        visited[newx][newy] = false;
        
    }
    
     //Right
    newx = srcx;
    newy = srcy+1;
    if(isSafe(maze, newx, newy, row, col, visited)){

        //processing
        visited[newx][newy] = true;

        //recursive relation
        output.push_back('R');
        moveMent(maze, newx, newy, row, col, visited, output);

        //Backtraking
        output.pop_back();
        visited[newx][newy] = false;
        
    }
    
     //UP
    newx = srcx-1;
    newy = srcy;
    if(isSafe(maze, newx, newy, row, col, visited)){

        //processing
        visited[newx][newy] = true;

        //recursive relation
        output.push_back('U');
        moveMent(maze, newx, newy, row, col, visited, output);

        //Backtraking
        output.pop_back();
        visited[newx][newy] = false;
        
    }

}

int main(){
    int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 1, 0}, {1,1,1,1}};
    int srcx = 0;
    int srcy = 0;
    int row = 4;
    int col = 4;
    string output = "";
    vector<vector<bool>>visited(row, vector<bool>(col, false));
    if(maze[0][0] == 0){
        cout<<"No path exist "<<endl;
    }
    else{
        visited[srcx][srcy] = true;
        moveMent(maze, srcx, srcy, row, col, visited, output);
    }
    
    return 0;
}