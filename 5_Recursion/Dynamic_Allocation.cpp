#include<iostream>
using namespace std;

int main()
{   
    int row = 5;
    int col = 5;

    //2d array without malloc
    int **arr = new int*[row];
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            arr[i][j] = 5;
        }
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i<row; i++)
        delete []arr[i];
    delete []arr;

    cout<<endl<<endl;
   
    // with malloc
    int ** malloc_arr = (int**) malloc(sizeof(int*)*row);
    for(int i = 0; i<row; i++){
        malloc_arr[i] = (int*) malloc(sizeof(int) * col); // Allocate memory for each row
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            malloc_arr[i][j] = 7;
        }
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
           cout<<malloc_arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i<row; i++)
        free (malloc_arr[i]);
     free (malloc_arr);

    return 0;
}