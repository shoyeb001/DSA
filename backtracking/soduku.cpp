#include <iostream>
using namespace std;

void print(int grid[9][9]){
    for (int i = 0; i<9; i++)
    {
        for (int j = 0; j<9; j++)
        {
            cout << grid[i][j];
        }
        cout<<endl;
    }
    
}

bool issafe(int grid[9][9], int row, int col, int num){
    for (int x = 0; x <=8; x++)
    {
        if (grid[row][x]==num)
        {
            return false;
        }
        
    }
    for (int x = 0; x <=8; x++)
    {
        if (grid[x][col]==num)
        {
            return false;
        }
    }
    int startrow = row - row%3;
    int startcol = col - col%3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            if (grid[i+startrow][j+startcol]==num)
            {
                return false;
            }
            
        }
        
    }
    
    return true;
    
}

bool solvesoduku(int grid[9][9], int row, int col){
    if (row==9-1 && col==9)
    {
        return true;
    }
    if (col==9)
    {
        row++;
        col=0;
    }
    if (grid[row][col]>0)
    {
        return solvesoduku(grid,row,col+1);
    }
    for (int num = 1; num <= 9; num++)
    {
        if (issafe(grid,row,col,num))
        {
            grid[row][col]=num;
            if (solvesoduku(grid,row,col+1))
            {
                return true;
            }
        }
        grid[row][col]=0;

    }
    return false;    
    
}

int main(){
    int grid[9][9]={ { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

    if (solvesoduku(grid,0,0))
    {
        print(grid);
    }
    else
    {
        cout<<"no solution exits"<<endl;
    }
    return 0;
}
